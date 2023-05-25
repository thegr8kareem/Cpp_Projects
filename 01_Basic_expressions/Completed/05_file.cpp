#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    const float PI = 3.14;
    int radius;

    cout << "Enter the radius of the sphere: \n";
    cin >> radius;

    cout << "The volume of the sphere is: \n"
         << (float) (4 / 3) * PI * pow(radius, 2);
    return 0;
}