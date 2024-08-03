// MULTI LEVEL INHERITANCE
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

class Puppy: public Dog{
    public:
    void play(){
        cout<<"The puppy play "<<endl;
    }
};

int main(){
    Puppy myPuppy;
    myPuppy.eat(); // base class function
    myPuppy.bark(); // derived class function
    myPuppy.play();
    
    return 0;
}