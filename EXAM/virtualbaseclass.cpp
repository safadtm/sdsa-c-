// VIRTUAL BASE CLASS
#include<iostream>
using namespace std;

// base class
class Device{
    public:
        void powerOn(){
            cout<<"The device is powered on"<<endl;
        }
};

class Phone : virtual public Device{
    public:
        void makeCall(){
            cout<<"The phone is making a call"<<endl;
        }
};

class Camera : virtual public Device{
    public:
        void takePhoto(){
            cout<<"The camera is taking a photo"<<endl;
        }
};

class Smartphone : public Phone,public Camera{
    public:
        void useApp(){
            cout<<"The smartphone is using an app"<<endl;
        }
};

int main(){
    Smartphone mySmartphone;
    
    mySmartphone.powerOn();
    mySmartphone.makeCall();
    mySmartphone.takePhoto();
    mySmartphone.useApp();

    return 0;
}