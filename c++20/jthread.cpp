#include <iostream>
#include <thread>
int main() {
    std::jthread thr([] {
         std::cout << "This is C++20 jthread." << std::endl; });
    return 0;
}