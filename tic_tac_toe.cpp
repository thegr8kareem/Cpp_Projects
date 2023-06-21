#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

char gameBoard(char *spaces);
char playerMove(char *spaces, char player);
char computerMove(char *spaces, char computer, char player);
char checkWinner(char *spaces, char player, char computer,bool gameRunning);
// char checkTies(char *spaces, char computer, char player);

int main()
{
    char player = 'X';
    char computer = 'O';
    bool gameRunning = true;
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

        playerMove(spaces, player);
        playerMoves++;

        computerMove(spaces, computer, player);
        computerMoves++;

        if (playerMoves >= 2 && computerMoves >= 2)
        {
            checkWinner(spaces,player,computer,gameRunning);
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
char playerMove(char *spaces, char player)
{
    int playerChoice;

    do
    {
        cout << "Enter a position [1 - 9] to mark your spot: ";
        cin >> playerChoice;

        switch (playerChoice)
        {
        case (1):
            spaces[0] = player;
            break;

        case (2):
            spaces[1] = player;
            break;
        case (3):
            spaces[2] = player;
            break;

        case (4):
            spaces[3] = player;
            break;

        case (5):
            spaces[4] = player;
            break;

        case (6):
            spaces[5] = player;
            break;

        case (7):
            spaces[6] = player;
            break;

        case (8):
            spaces[7] = player;
            break;

        case (9):
            spaces[8] = player;
            break;
        }
        gameBoard(spaces);
    } while (playerChoice < 1 || playerChoice > 9);

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
            num = (rand() % 9) + 1;
        }

    } while (spaces[num - 1] == player);

    spaces[num - 1] = computer;

    return computer;
}
char checkWinner(char *spaces, char player, char computer,bool gameRunning)
{
    // Row 1
    if ((spaces[0] == player && spaces[1] == player) && spaces[2] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[0] == computer && spaces[1] == computer) && spaces[2] == computer)
    {
        cout << "You have lost" << endl;
        gameRunning = false;
    }
    

    // Row 2
    else if ((spaces[3] == player && spaces[4] == player) && spaces[5] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[3] == computer && spaces[4] == computer) && spaces[5] == computer)
    {
        cout << "You have lost!" << endl;
        gameRunning = false;
    }

    // Row 3
    else if ((spaces[6] == player && spaces[7] == player) && spaces[8] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[6] == computer && spaces[7] == computer) && spaces[8] == computer)
    {
        cout << "You have lost!" << endl;
        gameRunning = false;
    }

    // Column 1
    else if ((spaces[0] == player && spaces[3] == player) && spaces[6] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[0] == computer && spaces[3] == computer) && spaces[6] == computer)
    {
        cout << "You have lost!" << endl;
        gameRunning = false;
    }

    // Column 2
    else if ((spaces[1] == player && spaces[4] == player) && spaces[7] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[1] == computer && spaces[4] == computer) && spaces[7] == computer)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }

    // Column 3
    else if ((spaces[2] == player && spaces[5] == player) && spaces[8] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[2] == computer && spaces[5] == computer) && spaces[8] == computer)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }

    // Diagonal left
    else if ((spaces[2] == player && spaces[4] == player) && spaces[6] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[2] == computer && spaces[4] == computer) && spaces[6] == computer)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }

    // Diagonal right
    else if ((spaces[0] == player && spaces[4] == player) && spaces[8] == player)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }
    else if ((spaces[0] == computer && spaces[4] == computer) && spaces[8] == computer)
    {
        cout << "You have won!" << endl;
        gameRunning = false;
    }

    else
    {
        cout << "You may have lost" << endl;
        gameRunning = false;
    }

    return gameRunning;
}
// char checkTies(char *spaces, char computer, char player)
// {
//     if (/* condition */)
//     {
//         /* code */
//     }

//     return computer;
// }
