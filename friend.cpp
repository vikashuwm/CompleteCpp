#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate
#include <initializer_list>

using namespace std;

template<class T>
class Student;  // Forward declaration

template<class T>
class Calculator {
public:
    static double getStudentPercentage(const Student<T>& s) {
        T sum = accumulate(s.marks.begin(), s.marks.end(), T(0));
        int size = static_cast<int>(s.marks.size());
        return static_cast<double>(sum) / size;
    }
};

template<class T>
class Student {
private:
    string name;
    vector<T> marks;
public:
    Student(string name, initializer_list<T> list) : name(name), marks{list} {}
    void printPercentage() const {
        cout << Calculator<T>::getStudentPercentage(*this) << endl;
    }
    // Declare Calculator<T> as a friend so it can access private members
    friend class Calculator<T>;
};

int main() {
    Student<int> s("Vikash Kumar", {50, 50, 50, 50, 50});
    s.printPercentage();  // Print the percentage
    return 0;
}
