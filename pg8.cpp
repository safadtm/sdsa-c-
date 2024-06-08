#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A's Constructor Called " << endl;
    }
};

class B
{
    static A a;

public:
    B()
    {
        cout << "B's Constructor called " << endl;
    }
};
int main()
{
    B b;
    return 0;
}