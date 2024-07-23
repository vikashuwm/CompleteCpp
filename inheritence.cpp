#include <iostream>
using namespace std;

class car {
private:
    int gear;
protected:
    int y;
public:
    void shiftGear(int x) {
        gear = x;
    }
    int getGear() const  {
        return gear;
    }
private:
    void updateGear() {
        cout << "Do nothing";
    }
};

class sportsCar : public car {
public:
    void showGear() const {
        cout << "gear number : " << getGear();
    }

    void changeY() {
        y = 10;
    }
};

int main() {
    cout << "Hello World!";
    return 0;
}