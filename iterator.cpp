#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec{1,2,3,4,5};
    vector<int>::iterator it = vec.begin();
    // auto it = vec.begin();
    while(it != vec.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    int arr[] = {6,7,8,9,10};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++) {
        cout << arr[i] << " ";
    }
    return 0;
}