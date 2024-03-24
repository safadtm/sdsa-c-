#include <iostream>
using namespace std;

class Test
{
public:
    //   User - defined constructor
    Test()
    {
        cout << "\n Constructor executed";
    }
    //  User - defined destructor
    ~Test()
    {
        cout << "\n Destructor executed";
    }
};

int main()
{
    Test t;
    return 0;
}