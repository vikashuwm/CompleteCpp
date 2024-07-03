#include <iostream>
using namespace std;
// pollymorphism -> fun overloadin , operator overloading , virtual fun.

int area(int l, int b) {
    return l * b;
}

float area(float r) {
    return 3.14 * r * r;
}

int main() {
    cout << "Area of rectangle is : " << area(4,5) << endl;
    cout << "Area of circle is : " << area(4.0f) << endl;
    return 0;
}