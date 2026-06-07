#ifndef Lab_5
#define Lab_5
#include <iostream>
#include <string.h>


template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}



template <typename X, int N>
void print_frames(X (&arr)[N]) {
    std::cout << "[";
    for(int i; i < N; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << "]\n"; 
}

template <typename X, int N>
void return_smll(X (&arr)[N]) {
    X smallest = arr[0];
    for(int i = 0; i < N; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    std::cout << smallest << std::endl;
}

template <typename C, typename E>
void tag_comp(std::string label1, C value1, std::string label2, E value2) {
    std::cout << label1 << ": " << value1 << " | " << label2 << ": " << value2 << std::endl;
}




#endif