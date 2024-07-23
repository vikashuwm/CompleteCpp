#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    Person(int id, string name) : id{id} , name{name} {}
    
    int getId() const {
        return id;
    }
    
    string getName() const {
        return name;
    }
    private:
    int id;
    string name;
};

class Student : public Person {
    public:
    using Person::Person;
    Student(int id = -1 , string name = "Null", int std = -1) : Person(id, name){
        this->std = std;
    }
    private:
    friend ostream& operator<<(ostream& os , Student& s) {
        cout << "Name: " << s.getName() << ", Id: " << s.getId() << ", Std: " << s.std << endl;
        return os;
    }
    private:
    int std;  
};
int main() {
    Student s1(123, "Alice", 3);
    Student s2(124, "Alica", 2);

    cout << s1 << s2;
    return 0;
}