// CONSTRUCTOR
#include<iostream>
using namespace std;

class Student{
   
    int rollNo;
    char name[50];
    double fee;
    public:
        Student(){
            cout<<"Enter the Roll No : ";
            cin>>rollNo;

            cout<<"Enter the Name : ";
            cin>>name;

            cout<<"Enter the fee : ";
            cin>>fee;
        }
        void display(){
            cout<<endl<<rollNo<<"\t"<<name<<"\t"<<fee<<endl;
        }
};

int main(){
    Student s; // object creation , class -> construcor created
    s.display();

    return 0;
}