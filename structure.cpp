#include <iostream>
#include <cstring> // For strncpy
using namespace std;

struct Book {
private:
    int book_id;
    string name;
    char author[20]; // Fixed-size array for author name

public:
    // Parameterized constructor
    Book(int id, const string& name, const char* a_name) : book_id(id), name(name) {
        strncpy(author, a_name, sizeof(author) - 1);
        author[sizeof(author) - 1] = '\0'; // Ensure null-termination
        cout << "Inside Book constructor!" << endl;
    }

    // Default constructor
    Book() : book_id(0), name(""), author("") {}

    // Method to display book details
    void displayBook() const {
        cout << "Book ID: " << book_id << ", Name: " << name << ", Author: " << author << endl;
    }
};

int main() {
    // Default constructor usage
    Book b;

    // Parameterized constructor usage with initializer list
    char c[] = "Vikash Kumar"; 
    Book b2 = {2, "Maze2", c};

    // Display book details
    b2.displayBook();

    return 0;
}
