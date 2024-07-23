#include <iostream>
using namespace std;

int main() {
    //static cast
    int x = 5, y = 2;
    double z = static_cast<double>(x)/y;
    cout << x << "/" << y << " = " << z << endl;

    // demotion
    double a = 1.1 , b = 2.2;
    cout << a << "/" << b << " = " << static_cast<int>(a) / static_cast<int>(b) << endl;
    return 0;
}