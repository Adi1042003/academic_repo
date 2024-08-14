#include <iostream>
#include <chrono>
#include <thread>

struct Timer {
    std::chrono::steady_clock::time_point start, end;
    std::chrono::duration<float> duration;

    Timer() {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer() {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        std::cout << "Timer took " << ms << " ms\n";
    }
};

void Function() {
    Timer timer;  // Starts timing
    for (int i = 0; i < 100; i++) {
        std::cout << "Hello\n";
    }
    // Timer stops and prints duration when it goes out of scope
}

int main() {
    Function();
    std::cin.get();  
    return 0;
}
