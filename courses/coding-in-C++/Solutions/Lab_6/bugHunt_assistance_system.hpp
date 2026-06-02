#ifndef ASSISTANCE_SYSTEM_HPP
#define ASSISTANCE_SYSTEM_HPP

#include <string>
#include <vector>
#include <memory>

#include "bugHunt_vehicle.hpp"


class DistanceSensor {
private:
    std::string position;
    bool active;
    double measured_distance_m;

public:

    DistanceSensor(const std::string &sensor_position,
                   double initial_distance_m);

    void set_distance(double distance_m);
    void activate();
    void deactivate();

    double get_distance() const;
    bool is_active() const;
    std::string get_position() const;

    bool operator<(const DistanceSensor &other) const;
    bool is_in_warning_distance_range(double warning_distance) const;

    void print_info() const;
};


class AssistanceFeature {
    private:
    
    public:
        AssistanceFeature() = default;
        virtual void evaluate(Vehicle &vehicle) = 0;
        virtual void printName() = 0;
        ~AssistanceFeature();
};



class EmergencyBrakeSystem: public AssistanceFeature {
private:
    double critical_distance_m;
    std::shared_ptr<DistanceSensor> front_sensor;

public:
    EmergencyBrakeSystem(double critical_distance);

    void evaluate(Vehicle &vehicle)override;
    void printName() override;
};



class LaneKeepingAssist: public AssistanceFeature {
private:
    double max_allowed_offset_m;
    double correction_angle;
    std::shared_ptr<DistanceSensor> front_sensor;

public:
    LaneKeepingAssist(double max_offset, double correction);

    void evaluate(Vehicle &vehicle) override;
    void printName() override;
};



class AdaptiveCruiseControl: public AssistanceFeature
{
private:
    double target_speed_kmh;
    double minimum_distance_m;
    std::shared_ptr<DistanceSensor> front_sensor;

public:
    AdaptiveCruiseControl(double target_speed,
                          double minimum_distance);

    void evaluate(Vehicle &vehicle) override;
    void printName() override;
};



class ParkingAssistant: public AssistanceFeature {
private:
    std::vector<std::shared_ptr<DistanceSensor *>> sensors;
    double warning_distance_m;

public:
    ParkingAssistant(double warning_distance);

    void add_sensor(DistanceSensor *sensor);
    void print_warnings() const;

    void evaluate(Vehicle &vehicle) override;
    void printName() override;
};

#endif