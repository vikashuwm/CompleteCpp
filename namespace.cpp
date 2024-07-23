#include <iostream>
using namespace std;

namespace n1 {
    void fun() {
        cout << "Inside n1\n";
    }
}

namespace n2 {
    void fun() {
        cout << "Inside n2\n";
    }
}

using namespace n1;
using namespace n2;

int main() {
    // This will cause a conflict because both n1 and n2 have a fun() function
    // fun();

    // To resolve the conflict, you can use the fully qualified names
    n1::fun();
    n2::fun();

    return 0;
}
