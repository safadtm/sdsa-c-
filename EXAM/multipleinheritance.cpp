// MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

// base class
class Animal{
  public:
   void eat(){
    cout<<"This animal eats food"<<endl;
   }
};

// base class
class Pet{
    public:
        void cuddle(){
            cout<<"This pet likes to cuddle"<<endl;
        }
};

// derived class
class Dog : public Animal,public Pet{
   public:
   void bark(){
    cout<<"The dog barks"<<endl;
   }
};


int main(){
    Dog myDog;
    myDog.eat(); // 1st base class function
    myDog.cuddle(); // 2nd base class function
    myDog.bark(); // derived class function
    return 0;
}