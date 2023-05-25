/*
4. Write a program in C++ to print the sum of two numbers using variables. Go to the editor
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59
*/

#include <iostream>

int main()
{
    using namespace std;
    int num1, num2;

    cout << "Enter the respective numbers" << endl;
    cin >> num1;
    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
    return 0;
}