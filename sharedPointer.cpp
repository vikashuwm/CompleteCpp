#include <iostream>
#include <memory>

using namespace std;
int main() {
    shared_ptr<int[]> arr(new int[10]);
    weak_ptr<int[]> arr_week{arr};
    auto arr2 = make_shared<int>(10);

    auto arr2  = make_shared<vector<int>>(10, 0);
    return 0;    
}