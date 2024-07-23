#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

template <class T>
class my_vector {
    public:
    my_vector() {};
    my_vector(initializer_list<T> list) : vec{list} {}
    T operator[](int i) {
        if(i >=0 && i <= vec.size())
            return vec[i];
        else{
            throw "Out of boud index!";
        }
    }
    vector<T>::iterator begin() {
        return vec.begin();
    }
    private:
    vector<T> vec;
};

int main() {
    my_vector<int> vec{1,23,4,5,6};
    cout << vec[2];
    cout << *vec.begin();
    return 0;
}