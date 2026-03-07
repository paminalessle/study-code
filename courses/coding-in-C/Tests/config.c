#include <stdio.h>

int main() {
    char sim_duration_s[] = "Simulated Steps";
    char parking_cells_s[] = "Parking Cells";
    char max_parking_duration_s[] = "Max. Parking Time";
    char new_car_prob_s[] = "New Car Prob.";
    char max_cars_arriving_s[] = "Max. New Cars";
    char seed_s[] = "Seed";
    
    int sim_duration = 4;
    int parking_cells = 5;
    int max_parking_duration = 68;
    float new_car_prob = 20.235;
    int max_cars_arriving = 73;
    int seed = 4832;


    FILE *fptr; 
    
    fptr = fopen("config.txt", "a");      //edit file name and dir


    fprintf(fptr, "\n");
    fprintf(fptr, "Configured data:\n");
    fprintf(fptr, "\n");

    for(int time = 5;time>0; time--) {
        fprintf(fptr, "|%15s|%15s|%19s|%15s|%15s|%15s|\n", sim_duration_s, parking_cells_s, max_parking_duration_s, new_car_prob_s, max_cars_arriving_s, seed_s);
        fprintf(fptr, "|%15i|%15i|%19i|%14.2f%%|%15i|%15i|\n", sim_duration, parking_cells, max_parking_duration, new_car_prob, max_cars_arriving, seed);
    }


    fclose(fptr);

}
