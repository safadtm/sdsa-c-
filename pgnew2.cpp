#include <iostream>
#include <string>
using namespace std;
// Base class
class Student
{
    public:
    string name;
    int rollNo;

    // Constructor for Student class
    Student(string name, int rollNo)
    {
        cout << "Student class constructor" << endl;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Subject 1 class inheriting virtually from Student
class Subject1 : virtual public Student
{
public:
    int marks1;
    // Constructor for subject 1 class
    Subject1(string name, int rollNo, int marks1) : Student(name, rollNo)
    {
        cout << "Subject 1 class constructor called" << endl;
    }

    void showMarks1() const
    {
        cout << "Marks in subject 1 :" << marks1;
    }
};
// Subject 2 class inheriting virtually from Student
class Subject2 : virtual public Student
{
public:
    int marks2;
    // Constructor for subject 2 class
    Subject2(string name, int rollNo, int marks2) : Student(name, rollNo)
    {
        cout << "Subject 2 class constructor called" << endl;
    }

    void showMarks2() const
    {
        cout << "\nMarks in subject 2 :" << marks2;
    }
};

// Derived class inheriting from both Subject1 and Subject2
class Result : public Subject1, public Subject2
{
public:
    // constructor for result class
    Result(string name, int rollNo, int marks1, int marks2) : Student(name, rollNo), Subject1(name, rollNo, marks1), Subject2(name, rollNo, marks2)
    {
        cout << "Result class constructor called" << endl;
    }

    void showResult() const
    {
        int total = marks1 + marks2;
        cout << "\nTotal Marks: " << total << endl;
    }
};

int main()
{
    // Creating an object of the result
    Result student("John", 101, 80, 90);


    cout << "\nDisplaying Student Details:\n";
    student.showDetails(); // Show student details
    student.showMarks1();  // show mark for subject 1
    student.showMarks2();  // show mark for subject 1

    student.showResult(); // Show total marks

    return 0;
}
