#include <iostream>
using namespace std;

// Swap using references
void swap(int& a, int& b) {
    cout << "Before swap (reference): a = " << a << ", b = " << b << endl;
    std::swap(a, b);
    cout << "After swap (reference): a = " << a << ", b = " << b << endl;
}

// Swap using pointers
void swap(int* a, int* b) {
    cout << "Before swap (pointer): *a = " << *a << ", *b = " << *b << endl;
    std::swap(*a, *b);
    cout << "After swap (pointer): *a = " << *a << ", *b = " << *b << endl;
}

int main() {
    int a{4}, b{5};

    // Swap using references
    swap(a, b);
    cout << "After swap function (reference): a = " << a << ", b = " << b << endl;

    // Reset values
    a = 4;
    b = 5;

    // Swap using pointers
    swap(&a, &b);
    cout << "After swap function (pointer): a = " << a << ", b = " << b << endl;

    return 0;
}
