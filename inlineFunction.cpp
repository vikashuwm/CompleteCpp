#include <iostream>
using namespace std;

// inline is request
inline void fun() {
    for(int i=0;i<10;i++){
        cout <<"Inside fun \n";
    }
}

int main() {
    fun();
    return 0;
}
