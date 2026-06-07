#include <iostream>
#include <string.h>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include "Lab_5.hpp"


int main() {
    double x = 3.7;
    double y = 4.9;

    std::cout << x << " " << y << std::endl;
    swap(x, y);
    std::cout << x << " " << y << std::endl;

    double arr[] = {12, 15, 18, 21.7, 13.9, 1.6};

    print_frames(arr);

    return_smll(arr);

    std::string label1 = "Channel";
    std::string label2 = "Priority";
    std::string value1 = "motor_temp";
    int value2 = 2;

    tag_comp(label1, value1, label2, value2);
    std::vector<int> data {42, 17, 42, 5, 99, 17, 63, 12};
    //prints the og data
    for(int i: data) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
    //sorts the data
    std::sort(data.begin(), data.end());
    //prints the sorted data
    for(int i: data) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
    
    std::find(data.begin(), data.end(), 63);

    return 0;
}