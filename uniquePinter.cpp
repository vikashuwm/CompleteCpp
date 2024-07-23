#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int[]> arr = make_unique<int[]>(10);
    unique_ptr<int[]> arr2(new int[10]);
    for(int i=0;i<10;i++) {
        arr[i] = i*i;
    }
    for(int i = 0;i<10;i++) {
        cout << arr[i] << " : " << i << endl;
    }
    return 0;
}