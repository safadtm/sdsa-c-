#include<iostream>
using namespace std;
const int global_size=5;

class Student{
  int roll_no;
  int marks[global_size];
  public:
   void getdata();
   void tot_marks();
};

void Student::getdata(){
cout<<"\nEnter roll no: ";
cin>>roll_no;


for(int i=0;i<global_size;i++){
cout<<"Enter marks in subject"<<(i+1)<<": ";
cin>>marks[i];
}
}

void Student::tot_marks(){
int total=0;
for(int i=0;i<global_size;i++){
total+= marks[i];
}
cout<<"\n\nTotal marks "<<total;
}
int main(){
    Student stu;
    stu.getdata();
    stu.tot_marks();
    return 0;
}