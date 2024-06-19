#include <iostream>
#include <string>
using namespace std;

// base class
class Student
{
public:
    string name;
    int rollNo;

    void getDetails()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
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
    void getMarks1()
    {
        cout << "Enter marks in Subject 1: ";
        cin >> marks1;
    }

      void showMarks1()
    {
        cout << "Marks in subject 1 :"<<marks1;
    }
};
// Subject 2 class inheriting virtually from Student
class Subject2 : virtual public Student
{
public:
    int marks2;
    void getMarks2()
    {
        cout << "Enter marks in Subject 2: ";
        cin >> marks2;
    }

         void showMarks2()
    {
        cout << "\nMarks in subject 2 :"<<marks2;
    }
};

// Derived class inheriting from both Subject1 and Subject2
class Result : public Subject1, public Subject2
{
public:
    void showResult()
    {
        int total = marks1 + marks2;
        cout << "\nTotal Marks: " << total << endl;
    }
};

int main()
{
    Result student;
    student.getDetails(); // get student details
    student.getMarks1();  // get marks in subject 1
    student.getMarks2();  // get marks in subject 2

    cout << "\nDisplaying Student Details:\n";
    student.showDetails(); // Show student details
    student.showMarks1(); //show mark for subject 1
    student.showMarks2();//show mark for subject 1

    student.showResult();//Show total marks

    return 0;
}
