#include <iostream>
using namespace std;

// function template
template<class x, class y>
y sum(x a , y b) {
    return a + b;
}

template<class x>
class fun{
    x id;
    public:
    fun(x value) : id(value){}
    void show() const {
        cout << id;
    }
};




int main() {
    cout << sum(4, 2.5);
    return 0;
}