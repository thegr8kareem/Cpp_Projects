#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double temp;
    double fahrenheit;

    cout << "Enter the temperature in celsius: \n";
    cin >> temp;

    fahrenheit = (temp * (9 / (double)5)) + 32;

    cout << "The temperature outside in Fahrenheit is: " << fahrenheit;
    

    return 0;
}