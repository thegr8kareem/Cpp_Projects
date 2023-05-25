#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    int dividend;
    int divisor;
    
    cout << "Enter the dividend: \n";
    cin >> dividend;

    cout << "Enter the divisor: \n";
    cin >> divisor;

    cout << "The quotient of the division is: "
         << (int) dividend / divisor << endl;

    cout << "The remainder of the division is: "
         << (int) dividend % divisor;

    return 0;
}