#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{

    int num;
    cout << "Enter a positive integer" << endl;
    cin>>num;
    if (num < 0)
    {
        cout << "Factorial is not defined for negative number" << endl;
    }
    else
    {
        cout << "Factorial of " << num << " is: " << fact(num);
    }
    return 0;
}
