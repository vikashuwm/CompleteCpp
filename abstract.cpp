#include <iostream>
using namespace std;
class Person {
    public:
    virtual void fun() = 0;
    void show () {
        cout << "This is show time ..";
    }
};

class child : public Person {
    public:
    void fun() {
        cout << "Do nothing!";
    }
};

int main() {
    child c;
    c.show();
    return 0;
}