#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3, large;
    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the second number:";
    cin >> num2;
    cout << "Enter the third number:";
    cin >> num3;

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            large = num1;
        }
        else
        {
            large = num3;
        }
    }
    else
    {
        if (num2 >= num3)
        {
            large = num2;
        }
        else
        {
            large = num3;
        }
    }
    cout << "Largest among the " << num1 << " " << num2 << " " << num3 << " is " << large<<endl;
    return 0;
}
