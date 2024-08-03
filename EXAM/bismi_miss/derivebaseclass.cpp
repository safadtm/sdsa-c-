// DERIVED BASE CLASS
#include<iostream>
using namespace std;

// base class
class Vehicle{
    public:
        void start(){
            cout<<"The vehicle starts"<<endl;
        }
};

// derived base class
class LandVehicle : public Vehicle{
    public:
        void drive(){
            cout<<"The Land vehicle drives on roads"<<endl;
        }
};

// class
class Car : public LandVehicle{
    public:
        void honk(){
            cout<<"The car honks horn"<<endl;
        }
};

int main(){
    Car myCar;
    myCar.start(); // base class
    myCar.drive(); // derived base class
    myCar.honk();

    return 0;
}