#include <iostream>
#include <vector>
using namespace std;

struct Person {
    public:
    int age = 27;
    string name = "Vikash Kumar";
};

void printPerson(Person& p) {
    p.age = 10;
}
int main() {
    Person p;
    printPerson(p);
    cout << p.age<<endl;

    int arr[5] = {1};
    for(int i=0;i<5;i++) {
        cout << arr[i] << " \n";
    }

    vector<int> vec {1,23,4,5,6};
    auto it = vec.begin();
    cout << *it <<" " << &it << " \n" ;
    cout << *it <<" " << &it << " \n" ;
    return 0;
}