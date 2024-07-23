#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int* p = arr;
    cout << p[4] << endl;
    int x = 10;
    p  = &x;
    cout << p[1] << endl;
    return 0;
}