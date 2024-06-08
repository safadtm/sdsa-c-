// implement Hybrid inheritance
#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int roll_number;

public:
    // Constructor
    Student(string student_name, int student_roll_number) {
        name = student_name;
        roll_number = student_roll_number;
    }

    // Member function to display student details
    void display_details() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
    }
};

// Another base class
class Subject {
protected:
    int marks1;
    int marks2;

public:
    // Constructor
    Subject(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }

    // Member function to display subject marks
    void display_marks() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

// Derived class from multiple base classes
class Result : public Student, public Subject {
protected:
    int total_marks;

public:
    // Constructor
    Result(string student_name, int student_roll_number, int m1, int m2) 
        : Student(student_name, student_roll_number), Subject(m1, m2) {
        total_marks = m1 + m2;
    }

    // Member function to display result
    void display_result() {
        display_details(); // Calling base class method
        display_marks();   // Calling base class method
        cout << "Total Marks: " << total_marks << endl;
    }
};

// Another derived class
class School : public Result {
private:
    string school_name;

public:
    // Constructor
    School(string student_name, int student_roll_number, int m1, int m2, string s_name) 
        : Result(student_name, student_roll_number, m1, m2) {
        school_name = s_name;
    }

    // Member function to display school details
    void display_school() {
        display_result(); // Calling base class method
        cout << "School Name: " << school_name << endl;
    }
};

int main() {
    // Creating an object of School class
    School student_school("Joyal", 56845, 70, 80, "ABC School");

    // Displaying student details, subject marks, total marks, and school details
    student_school.display_school();

    return 0;
}