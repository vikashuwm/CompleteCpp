#include <iostream>
using namespace std;

class foo {
private:
    int f; // Non-static member variable
    static int x; // Static member variable

public:
    // Constructor with initialization list
    foo(int f) : f(f) {}

    // Default constructor delegating to the parameterized constructor
    foo() : foo(0) {}

    // Static member function to set the value of x
    static void set_x(int value) {
        x = value;
    }

    // Static member function to retrieve the value of x
    static int get_x() {
        return x;
    }
};

// Initializing static member variable x outside the class definition
int foo::x = 10;

int main() {
    foo ob;
    
    // Accessing the static member function using an object
    cout << "Value of x using object: " << ob.get_x() << endl;

    // Accessing the static member function using the class name
    cout << "Value of x using class name: " << foo::get_x() << endl;

    return 0;
}
