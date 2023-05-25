#include <iostream>
#include <ctime> // this is needed to generate random numbers;
using namespace std;

int main()
{

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i == 0 || i == 6)
            {
                if (j > 0 && j <= 5)
                {
                    cout << "x";
                }
                else
                {
                    cout << " ";
                }
            }

            if (i == 1 || i == 5)
            {
                if (j == 0 || j == 6 || j == 13 || j == 22)
                {
                    cout << "x";
                }
                else
                {
                    cout << " ";
                }
            }

            // cout << "\n";

            if (i == 2 || i == 4)
            {
                if (j == 0 || j == 13 || j == 22)
                {
                    cout << "x";
                }
                else
                {
                    cout << " ";
                }
            }

            if (i == 3)
            {
                if (j == 0)
                {
                    cout << "x";
                }

                if (j >= 1 && j < 10)
                {
                    cout << " ";
                }
                

                if (j >= 10 && j <= 16)
                {
                    cout << "x";
                }

                if (j > 16 && j < 19)
                {
                    cout << " ";
                }
                

                if (j >= 19 && j <= 25)
                {
                    cout << "x";
                } 
            }
        }
        cout << "\n";
    }
    return 0;
}
