#include <iostream>
using namespace std;

class singleton {
public:
    singleton(singleton&) = delete;
    singleton& operator=(singleton&) = delete;
    singleton(singleton&&) = delete;
    singleton& operator=(singleton&&) = delete;
    static singleton& getInstance() {
        return s;
    }

    void showMessage() {
        std::cout << "Singleton instance address: " << this << std::endl;
    }
private:
    static singleton s;
    singleton()  { cout << "A singleton class is called !"; }
    ~singleton() = default;
};
singleton singleton::s;

int main() {
    singleton& s = singleton::getInstance();
    s.showMessage();

    auto& s2 = singleton::getInstance();
    s2.showMessage();
    return 0;
}