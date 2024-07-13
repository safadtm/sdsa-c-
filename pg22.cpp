#include<iostream>
using namespace std;

class Space{
int x,y,z;
public:void getdata(int a,int b,int c);
void display();
void operator-();
};

void Space::getdata(int a,int b,int c){
    x=a;
    y=b;
    z=c;
}

void Space::display(){
    cout<<"x="<<x<<endl<<"Y="<<y<<endl<<"Z="<<z;    
}

void Space::operator-(){
    x=x;
    y=y;
    z=z;
}

int main(){
    Space s;
    s.getdata(10,20,30);
    s.display();
    -s;
    cout<<endl<<"After Overloading\n";
    s.display();
    return 0;
}
