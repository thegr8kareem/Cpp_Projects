#include <iostream>
#include <cmath>
using namespace std;

double showBalance(double balance);
double deposit(double balance);
double withdrawal(double balance);

int main()
{
    double current_balance = 500.00;
    int choice;

    do
    {
        cout << "*************************\n";
        cout << "Welcome to KareemFX\n";
        cout << "Pick your option and lets get to banking\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "*************************\n";

        cout << "Choose one of the options above to proceed: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Alright , have a look at your balance\n";
            showBalance(current_balance);
            break;
        case 2:
            current_balance += deposit(current_balance);

            break;
        case 3:
            current_balance -= withdrawal(current_balance);
            break;

        case 4:
            cout << "Exiting...\n";
            cout << "Done" << endl;
            break;

        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

// Function for showing balance
double showBalance(double balance)
{
    cout << "Alright, your balance is : " << balance << endl;
    return balance;
}

// Function for deposits
double deposit(double balance)
{
    double deposit_value;

    cout << "How much will you be depositing today ?" << endl;
    cin >> deposit_value;

    cout << "Finalizing your deposit..." << endl;
    cout << "You have successfully deposited $" << deposit_value << endl;

    return deposit_value;
};

// Function for withdrawals
double withdrawal(double balance)
{
    double withdrawal_value;

    cout << "How much will you be withdrawing today ?" << endl;
    cin >> withdrawal_value;

    if (balance < withdrawal_value)
    {
        cout << "Please for balance is insufficient for a withdrawal of:  $" << withdrawal_value << endl;
        return 0;
    }
    else
    {
        cout << "Finalizing your withdrawal..." << endl;
        cout << "You have successfully withdrawn: $" << withdrawal_value << endl;
        return withdrawal_value;
    }
}