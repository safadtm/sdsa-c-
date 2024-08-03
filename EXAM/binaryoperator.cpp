// BINARY OPERATOR OVERLOADING +,-,*,/
// Complex number =(2+3i) + (5+3i) = (7+6i)

#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    void setValue(int ireal, int iimg)
    {
        real = ireal;
        img = iimg;
    }

    // operator overloading
    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setValue(2, 3);
    c1.display();
    c2.setValue(5, 3);
    c2.display();

    c3=c1+c2;
    cout<<"After Overloading"<<endl;
    c3.display();

    return 0;
}