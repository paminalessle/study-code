#include <iostream>
#include <thread>
#include <semaphore>
#include <vector>

/*
constexpr int NUM_ITERATIONS = 1'000'000;
constexpr int C_ITERATIONS = 500'000;

int counter = 0;

std::binary_semaphore lock(1);

void increment_loop() {
    for(int i = 0; i < NUM_ITERATIONS; i++) {
        lock.acquire();
        counter ++;
        lock.release();
    }  
}
void c_increment() {
    for(int i = 0; i < C_ITERATIONS; i++) {
        lock.acquire();
        counter--;
        lock.release();
    }
}



int main() {
    std::thread a(increment_loop);
    std::thread b(increment_loop);
    std::thread c(c_increment);

    a.join();
    b.join();
    c.join();

    std::cout << "Counter: " << counter << std::endl;
}
*/

//  Consumer-Producer Problem


#define ITEMS 100

int counter = 0;
int item_count = 0;
int producer_count = 0;

void produce_item() {
    item_count ++;
}

void producer() {
    std::cout << "Producer: " << producer_count << std::endl;
}

void consumer(int consumer_id) {
    std::cout << "Consumer: " << consumer_id << ", Consumed: " << std::endl;
}