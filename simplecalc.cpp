#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    char op;
    double num1, num2;

    cout << "****************** CALCULATOR *****************\n";

    cout << "Enter the number: \n";
    cin >> num1;

    cout << "Enter the number: \n";
    cin >> num2;

    cout << "Enter the operator: \n";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The result of this addition is : " << num1 + num2 << endl;
        break;
    case '-':
        cout << "The result of this subtraction is : " << num1 - num2 << endl;
        break;
    case '*':
        cout << "The result of this multiplication is : " << num1 * num2 << endl;
        break;
    case '/':
        cout << "The result of this division is : " << num1 / num2 << endl;
        break;

    default:
        cout << "You did not enter an operator" << endl;
        break;
    }

    cout << "*****************************************************";

    return 0;
}