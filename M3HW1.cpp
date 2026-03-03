// CSC 134
// M2HW-Bronze
//Keora James
// 3/2/26

#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
    string first_name, last_name, full_name;
    cout << "Question 1 : "<< endl;
    cout << "Hello! I'm a C++ program! What's your name?"<< endl;
    cin >> first_name;
    cout << "What's your last name?" << endl;
    cin>> last_name; 
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name<< endl; 

    cout << "Question 2 : "<< endl;
    cout << "Welcome to the resturant of C++!" << endl;
    string item= "pizza";
    double price = 9.99;
    double tax_rate = 0.07;
    double tax_amount = price * tax_rate;
    double total_price = price + tax_amount;
    double tip_rate = 0.15;
    double tip_amount = price * tip_rate;
    double final_total = total_price + tip_amount;

    // Print the receipt
    cout << setprecision(2)<< fixed;
    cout << "Thank you for eating with us " << endl;
    cout << "-------------------------------"<< endl;
    cout << item << "\t$" << price << endl;
    cout << "Tax\t$" << tax_amount << endl;
    cout << "-------------------------------"<< endl;
    cout << "Total\t$" << total_price << endl;
    cout << "Tip\t$" << tip_amount << endl;
    cout << "-------------------------------"<< endl;
    cout << "Final Total\t$" << final_total << endl;

    cout << "Question 3:" << endl; 
    // Set precision for currency formatting

}
