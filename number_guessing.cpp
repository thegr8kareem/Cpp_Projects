#include <iostream>
#include <ctime> // this is needed to generate random numbers;

int main()
{
    using namespace std;

    int num, guess, tries;
    tries = 0;

    srand(time(0));
    num = rand() % 5;
    
    cout << "****** NUMBER GUESSING GAME ******\n";

    do
    {
        cout << "Guess the number between (0 - 5): \n";
        cin >> guess;
        tries ++;
    } while (guess != num);

    cout << "You guessed the number correctly in " << tries << " tries, " << "the number was: " << num << endl;
    cout << "**********************************\n";
    
    return 0;
}