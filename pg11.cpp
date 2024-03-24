#include<iostream>
using namespace std;
class Student{
  int rno;
  char name[50];
  double fee;
  public:
  Student(){
  cout<<"Enter the RollNo : ";
  cin>>rno;
  cout<<"Enter the Name : ";
  cin>>name;
  cout<<"Enter the Fee : ";
  cin>>fee;
  }
  
  void display(){
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
  }
};
int main(){
    Student s;
    s.display();
    return 0;
}