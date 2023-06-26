#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

/*
The only bug left is the issue if you enter a cahracter for player, the game crashes 
*/

char gameBoard(char *spaces);
char playerMove(char *spaces, char player, char computer);
char computerMove(char *spaces, char computer, char player);
char checkWinner(char *spaces, char player, char computer, bool *gameRunning);

int main()
{
    char player = 'X';
    char computer = 'O';
    bool gameRunning = true;
    bool *gameptr = &gameRunning;
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    int playerMoves = 0;
    int computerMoves = 0;
    // gameBoard(spaces);
    // playerMove(spaces, player);
    // computerMove(spaces, computer, player);
    // gameBoard(spaces);

    do
    {
        gameBoard(spaces);

        playerMove(spaces, player, computer);
        gameBoard(spaces);
        playerMoves++;

        computerMove(spaces, computer, player);
        gameBoard(spaces);
        computerMoves++;

        if (playerMoves >= 3 && computerMoves >= 3)
        {
            checkWinner(spaces, player, computer, gameptr);
        }

    } while (gameRunning == true);

    return 0;
}

char gameBoard(char *spaces)
{
    cout << "**************** TIC TAC TOE ****************" << endl;
    cout << "______"
         << "_____"
         << "______" << endl;

    cout << "     |     |     " << endl;

    cout << "  " << spaces[0] << "  |"
         << "  " << spaces[1] << "  |"
         << "  " << spaces[2] << "  " << endl;

    cout << "_____"
         << "|_____"
         << "|_____" << endl;

    cout << "     |     |     " << endl;

    cout << "  " << spaces[3] << "  |"
         << "  " << spaces[4] << "  |"
         << "  " << spaces[5] << "  " << endl;

    cout << "_____"
         << "|_____"
         << "|_____" << endl;

    cout << "     |     |     " << endl;

    cout << "  " << spaces[6] << "  |"
         << "  " << spaces[7] << "  |"
         << "  " << spaces[8] << "  " << endl;

    cout << "_____"
         << "|_____"
         << "|_____" << endl;

    cout << endl;
    cout << "*********************************************" << endl;
    return 0;
}
char playerMove(char *spaces, char player, char computer)
{
    int playerChoice;

    do
    {
        cout << "Enter a position [1 - 9] to mark your spot: ";
        std::cin >> playerChoice;

        if (playerChoice > 0 && playerChoice < 10)
        {
            switch (playerChoice)
            {
            case (1):
                if (spaces[0] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[0] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[0] = player;
                    break;
                }

            case (2):
                if (spaces[1] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[1] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[1] = player;
                    break;
                }
            case (3):
                if (spaces[2] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[2] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[2] = player;
                    break;
                }

            case (4):
                if (spaces[3] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[3] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[3] = player;
                    break;
                }

            case (5):
                if (spaces[4] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[4] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[4] = player;
                    break;
                }

            case (6):
                if (spaces[5] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[5] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[5] = player;
                    break;
                }

            case (7):
                if (spaces[6] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[6] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[6] = player;
                    break;
                }

            case (8):
                if (spaces[7] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[7] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[7] = player;
                    break;
                }

            case (9):
                if (spaces[8] == computer)
                {
                    cout << "This spot is already filled with O , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }
                else if (spaces[8] == player)
                {
                    cout << "This spot is already filled , choose another please: " << endl;
                    playerMove(spaces, player, computer);
                    return 0;
                }

                else
                {
                    spaces[8] = player;
                    break;
                }
            }
        }
        else
        {
            cout << "You are supposed to enter a number from [1 - 9]" << endl;
            break;
            playerMove(spaces, player, computer);
            // return 0;
        }

    } while (playerChoice < 1 || playerChoice > 9 );
    // gameBoard(spaces);

    return player;
}
char computerMove(char *spaces, char computer, char player)
{
    int num;

    srand(time(0));

    do
    {
        num = (rand() % 9) + 1;
        // cout << num << endl;
        if (spaces[num - 1] == computer)
        {
            // num = (rand() % 9) + 1;

            computerMove(spaces, computer, player);
            return 0;
        }

    } while (spaces[num - 1] == player);

    spaces[num - 1] = computer;
    // gameBoard(spaces);

    return computer;
}
char checkWinner(char *spaces, char player, char computer, bool *gameRunning)
{
    // Row 1
    if ((spaces[0] == player && spaces[1] == player) && spaces[2] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[0] == computer && spaces[1] == computer) && spaces[2] == computer)
    {
        cout << "You have lost" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // Row 2
    else if ((spaces[3] == player && spaces[4] == player) && spaces[5] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[3] == computer && spaces[4] == computer) && spaces[5] == computer)
    {
        cout << "You have lost!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // Row 3
    else if ((spaces[6] == player && spaces[7] == player) && spaces[8] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[6] == computer && spaces[7] == computer) && spaces[8] == computer)
    {
        cout << "You have lost!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // Column 1
    else if ((spaces[0] == player && spaces[3] == player) && spaces[6] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[0] == computer && spaces[3] == computer) && spaces[6] == computer)
    {
        cout << "You have lost!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // Column 2
    else if ((spaces[1] == player && spaces[4] == player) && spaces[7] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[1] == computer && spaces[4] == computer) && spaces[7] == computer)
    {
        cout << "You have lost!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // Column 3
    else if ((spaces[2] == player && spaces[5] == player) && spaces[8] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[2] == computer && spaces[5] == computer) && spaces[8] == computer)
    {
        cout << "You have lost!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // Diagonal left
    else if ((spaces[2] == player && spaces[4] == player) && spaces[6] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[2] == computer && spaces[4] == computer) && spaces[6] == computer)
    {
        cout << "You have lost!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // Diagonal right
    else if ((spaces[0] == player && spaces[4] == player) && spaces[8] == player)
    {
        cout << "You have won!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }
    else if ((spaces[0] == computer && spaces[4] == computer) && spaces[8] == computer)
    {
        cout << "You have lost!" << endl;
        *gameRunning = false;
        return *gameRunning;
    }

    // else
    // {
    //     cout << "You may have lost" << endl;
    //     *gameRunning = false;
    // }
    return *gameRunning;
}
