#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    int sub = 1;
    int rows , columns;
    int sub2 = columns +1  ;

    cout << "How many rows do you want to see: \n";
    cin >> rows;

    cout << "How many columns do you you want to use: \n";
    cin >> columns;

    for (int i = rows; i > 0; i--)
    {
        for (int j = columns; j > 0; j--)
        {
            if (j <= sub)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
        sub += 1;
    }

    for (int m = 0; m < rows + 1; m++)
    {
        // cout << " * " << endl;
        for (int j = 0; j < columns; j++)
        {
            if (j >= sub2)
            {
                cout << "   ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << "\n";
        sub2 -= 1;
    }
    return 0;
}
