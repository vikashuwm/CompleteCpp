#include <iostream>
using namespace std;

class Complex {
private:
    int a;
    int b;
public:
    Complex(int a, int b) : a(a), b(b) {}
    Complex(): Complex(0 , 0){}  // delegating constructor

    friend ostream& operator<<(ostream& out, const Complex& c) {
        cout << "a: " << c.a << " b: " << c.b << endl;
        return out;
    }
    Complex operator+(const Complex& c) const {
        return Complex(this->a + c.a, this->b + c.b);
    }

    Complex& operator=(const Complex& c) {
        this->a += c.a;
        this->b += c.b;
        return *this;
    }
};

int main() {
    Complex obj(1, 2), obj1(3,4), obj2;
    obj2 = obj1 + obj;
    cout << obj2;
    return 0;
}
