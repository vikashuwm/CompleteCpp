#include <iostream>

template <class T>
void printVector(T *vec, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Part 1: Create a pointer to an array of integers and print its elements
    int *vec = new int[5]{1, 2, 3, 4, 5};
    delete[] vec; // Correctly deallocates memory allocated with new[]

    // Part 2: Allocate memory dynamically for a single integer and print its value
    auto integer = new int(10); // Allocating memory for a single int and initializing it with value 10
    std::cout << "Value of integer is : " << *integer << std::endl;
    delete integer; // Deallocate the memory for the single int

    return 0;
}
