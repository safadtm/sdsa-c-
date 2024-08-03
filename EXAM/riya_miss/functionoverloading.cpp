// FUNCTION OVERLOADING
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

double add(double a, double b)
{
    return a + b ;
}

int main()
{
    int sum1 = add(5, 10);
    int sum2 = add(5, 10, 15);
    double sum3 = add(3.5, 4.3);

    cout<<"Sum 1: "<<sum1<<endl;
    cout<<"Sum 2: "<<sum2<<endl;
    cout<<"Sum 3: "<<sum3<<endl;
    return 0;
}