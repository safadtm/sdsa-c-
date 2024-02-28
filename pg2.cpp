#include <iostream>
using namespace std;
int main()
{

    int num1, num2, choice, sum = 0, sub = 0, div = 0, mul = 0;

    cout << "Arithmetic Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Addition" << endl;
        cout << "Enter first number:" << endl;
        cin >> num1;
        cout << "Enter second number:" << endl;
        cin >> num2;
        sum = num1 + num2;
        cout << "Sum = " << sum << endl;
        break;
    case 2:
        cout << "Substraction" << endl;
        cout << "Enter first number:" << endl;
        cin >> num1;
        cout << "Enter second number:" << endl;
        cin >> num2;
        sub = num1 - num2;
        cout << "Result = " << sub << endl;
        break;
    case 3:
        cout << "Multiplication" << endl;
        cout << "Enter first number:" << endl;
        cin >> num1;
        cout << "Enter second number:" << endl;
        cin >> num2;
        mul = num1 * num2;
        cout << "Result = " << mul << endl;
        break;
    case 4:
        cout << "Division" << endl;
        cout << "Enter first number:" << endl;
        cin >> num1;
        cout << "Enter second number:" << endl;
        cin >> num2;
        if (num1 == 0 || num2 == 0)
        {
            cout << "Invalid operation" << endl;
            break;
        }
        else
        {

            div = num1 / num2;
            cout << "Result = " << div << endl;
        }

        break;

    default:
        cout << "Wrong Choice!!!!!" << endl;
        break;
    }
    return 0;
}
