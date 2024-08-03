#include<iostream>
using namespace std;

class MyClass{
    public:
        int myInt;
        float myFloat;
        char myChar;
        void display();
};

// :: scope resolution operator
void MyClass::display(){
    cout<<"Values are : "<<myInt<<" "<<myFloat<<" "<<myChar<<endl;
}

int main(){
    MyClass myClass;
    myClass.myInt=10;
    myClass.myFloat=2.63;
    myClass.myChar='A';
    myClass.display();
    return 0;
}