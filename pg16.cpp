//  program to implement single inheritance
#include <iostream>
#include <string>
using namespace std;

// Base class
class Record {
protected:
    string name;
    int id;

public:
    // Constructor
    Record(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived class (inherits from Record)
class StudentRecord : public Record 
{
private:
    float marks;

public:
    // Constructor
    StudentRecord(string n, int i, float m) : Record("", 0), marks(m) {
        name = n; // Assigning to base class member
        id = i;   // Assigning to base class member
    }

    void displayMarks() {
        display(); // Accessing base class function
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create an object of the derived class
    StudentRecord student("John", 12345, 85.5);

    // Access base class members and functions
    student.displayMarks();

    return 0;
}