// CSC 134
// M2HW- Bronze 
// Keora James 
// 3/3/26

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
    double starting_balance, total_deposits, total_withdrawals, ending_balance;
    int account_number;

    // Set random seed for account number generation
    srand(time(0));

    // Greet user and ask for their name
    string first_name, last_name,full_name;
cout << "Question 1:  " << endl;
cout << "Hello! Welcome to the bank of CSC! Please login with your first and last name."<< endl;
cin >> first_name; 
cin >> last_name; 
full_name = first_name + " " + last_name;
cout << "Hello, "<< full_name << "! Here is your account summary"<< endl;


// Account summary
cout<< "Enter your starting balance: $";
cin >> starting_balance;
cout << "Enter your total deposits: $";
cin >> total_deposits;
cout << "Enter your total withdrawals: $";
cin >> total_withdrawals;
account_number = rand() % 900000 + 100000; // Generate a random 6-digit account number
ending_balance = starting_balance + total_deposits - total_withdrawals;
cout << fixed << setprecision(2); // Set decimal precision for currency

// Account summary output
cout << "\nAccount Summary for " << full_name << ":" << endl;
cout << "-----------------------------" << endl;
cout << "Account Number: " << account_number << endl;
cout << "Starting Balance: $" << starting_balance << endl;
cout << "Total Deposits: $" << total_deposits << endl;
cout << "Total Withdrawals: $" << total_withdrawals << endl;
cout << "Ending Balance: $" << ending_balance << endl;






cout << "\nQuestion 2: " << endl;
string school, team;
school ="FTCC";
team = "Trojans";
cout <<"Let's go " << school << "!" <<endl;
cout <<"Let's go " << school << "!" <<endl;
cout <<"Let's go " << school << "!" <<endl;
cout <<"Let's go " << team << "!" <<endl;
return 0;
}