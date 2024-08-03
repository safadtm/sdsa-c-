// SINGLE INHERITANCE
#include<iostream>
using namespace std;

// base class
class Animal{
  public:
   void eat(){
    cout<<"This animal eats food"<<endl;
   }
};
// derived class
class Dog : public Animal{
   public:
   void bark(){
    cout<<"The dog barks"<<endl;
   }
};


int main(){
    Dog myDog;
    myDog.eat(); // base class function
    myDog.bark(); // derived class function
    return 0;
}