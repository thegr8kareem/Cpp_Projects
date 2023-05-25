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
    // double new_balance;
    // new_balance = balance;
    cout << "Alright, your balance is : " << balance << endl; 
    return balance;
}

// Function for deposits
double deposit(double balance)
{
    double deposit_value;
    double new_balance;
    char final;

    cout << "How much will you be depositing today ?" << endl;
    cin >> deposit_value;
    cout << "Shall we finalize the deposit [Y / N] or terminate completely [T] ?\n"
         << endl;
    cin >> final;

    if (final == 'Y' || final == 'y')
    {
        cout << "Finalizing your deposit..." << endl;
        cout << "You have successfully deposited $" << deposit_value << endl;
        // new_balance = balance + deposit_value;
        // cout << "Great, your new balance after your deposit is: $" << new_balance << endl;
    }
    else if (final == 'N' || final == 'n')
    {
        cout << "Alright, you can proceed" << endl;
        deposit(balance);
    }
    else
    {
        cout << "Exiting..." << endl;
    }

    return deposit_value;
};

// Function for withdrawals
double withdrawal(double balance)
{
    double withdrawal_value;
    double new_balance;
    char final;
    char response;

    cout << "How much will you be withdrawing today ?" << endl;
    cin >> withdrawal_value;
    cout << "Shall we finalize the withdrawal [Y / N] or terminate completely [T] ?" << endl;
    cin >> final;

    if (balance < withdrawal_value)
    {
        cout << "Please for balance is insufficient for a withdrawal of:  $" << withdrawal_value << endl;
        cout << "Would you like to enter another amount instead [Y] or terminate the withdrawal process completely [T] ?" << endl;
        cin >> response;

        if (response == 'Y')
        {
            withdrawal(balance);
        }
        else
        {
            cout << "Exiting... \n" << "Done." << endl;
        }
        
    }
    else
    {
        if (final == 'Y' || final == 'y')
        {
            cout << "Finalizing your withdrawal..." << endl;
            cout << "You have successfully withdrawn: $" << withdrawal_value << endl;
            // new_balance = balance - withdrawal_value;
            // cout << "Great, your new balance after your withdrawal is: $" << new_balance << endl;
        }
        else if (final == 'N' || final == 'n')
        {
            cout << "Alright, thanks" << endl;
            withdrawal(balance);
        }
        else
        {
            cout << "Exiting..." << endl;
        }
    }

    return withdrawal_value;
}