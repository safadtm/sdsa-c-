#include<iostream>
using namespace std;

class Complex{
  int real;
  int img;
  public:
   void setValue(int ireal,int iimg){
    real=ireal;
    img=iimg;
   }  

   Complex operator+(Complex iB){
    Complex temp;
    temp.img=img+iB.img;
    temp.real=real+iB.real;

    return (temp);
   }

   void display(){
    cout<<real<<"+"<<img<<"i"<<endl;
   }
};

int main(){
    Complex A,B,C;

    A.setValue(2.5,3.5);
    A.display();
    B.setValue(1.6,2.7);
    B.display();
    C=A+B;
    cout<<"After overloading"<<endl;
    C.display();
    return 0;
}