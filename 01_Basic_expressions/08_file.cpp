#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    int num1;

    cout << "Enter the number you would like to use: \n";
    cin >> num1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == 4)
            {
                cout << num1 << "";
            }

            if (i >= 1 && i < 4)
            {
                if (j == 0)
                {
                    cout << num1;
                }
                else if (j == 4)
                {
                    cout << num1;
                }
                // else
                // {
                //     cout << " ";
                // }
            }
        }
        cout << "\n";
    }
    return 0;
}