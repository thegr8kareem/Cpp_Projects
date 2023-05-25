#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double opposite_x, adjacent_y, hypotenuse_z;

    cout << "Enter the opposite angle: " << endl;
    cin >> opposite_x;

    cout << "Enter the adjacent angle: " << endl;
    cin >> adjacent_y;

    hypotenuse_z = sqrt(pow(opposite_x,2) + pow(adjacent_y,2));
    cout << "The hypotenuse of the triangle is: " << hypotenuse_z;
    
    return 0;
}