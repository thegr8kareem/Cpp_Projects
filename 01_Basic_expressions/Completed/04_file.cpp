#include <iostream>

int main()
{
    using namespace std;

    int num1, num2, swap;

    cout << "Enter the numbers respectively: \n";
    cin >> num1;
    cin >> num2;
    swap = 0;
 
    swap = num1;
    num1 = num2;
    num2 = swap;

    cout << "The swapped values of num1 and num2 are: " << num1 << " and " << num2;

    return 0;
}