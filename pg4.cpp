#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

double add(double a, double b){
    return a+b;
}
int main()
{
    int sum1=add(5,10);
    int sum2=add(5,10,15);
    double sum3=add(3.5,4.5);

    cout<<"Sum of 5 and 10 is "<<sum1<<endl;
    cout<<"Sum of 5,10 and 15 is "<<sum2<<endl;
    cout<<"Sum of 3.5 and 4.5 is "<<sum3<<endl;
    return 0;
}
