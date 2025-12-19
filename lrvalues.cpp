#include <iostream>
#include <vector>


void processVector(std::vector<int>&& vec) {
    std::cout << "Processing vector: ";
    for (int n : vec) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Moving a data set to vec
    processVector(std::move(numbers)); // 'numbers' is now an xvalue
    
    // 'numbers' is now empty
    std::cout << "Numbers after move: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
