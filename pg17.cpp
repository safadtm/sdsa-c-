// a program to implement multilevel inheritance
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int roll_number;

public:
    Student(string student_name, int student_roll_number)
    {
        name = student_name;
        roll_number = student_roll_number;
    }

    void display_details()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
    }
};

class Subject : public Student
{
protected:
    int marks1;
    int marks2;

public:
    Subject(string student_name, int student_roll_number, int m1, int m2) : Student(student_name, student_roll_number)
    {
        marks1 = m1;
        marks2 = m2;
    }

    void display_marks()
    {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

class Result : public Subject
{
public:
    Result(string student_name, int student_roll_number, int m1, int m2) : Subject(student_name,student_roll_number,m1,m2)
    {
        name = student_name;
        roll_number = student_roll_number;
        marks1 = m1;
        marks2 = m2;
    }

    void display_result()
    {
        display_details();
        display_marks();
    }
};

int main()
{
    Result student_result("John Doe", 12345, 85, 90);

    student_result.display_result();

    return 0;
}