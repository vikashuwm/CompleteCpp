#include <iostream>
using namespace std;
struct s{
    int a = 10;
    double c;
    char b;
};
template<class T>
class myArray {
    T arr[10];
    public:
    T& operator[](int i) {
        return arr[i];
    }
};
class Person {
    int i = 10;
    public:
    void getAge() const  {
        cout << i << endl;
    }
};
int main() {
    s a;
    cout << sizeof(int) << sizeof(char) << sizeof(double) << endl;
    cout<< sizeof(a) << endl;
    Person p;
    p.getAge();

    myArray<int> arr;
    arr[0] = 2;
    arr[1] = 3;
    cout << arr[1] << endl;

    return 0;
}

