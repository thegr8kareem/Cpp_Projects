#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    int length;

    cout << "Enter the length of the side of the cube: \n";
    cin >> length;

    cout << "The volume of the cube is: \n"
         << pow(length, 3);
    return 0;
}