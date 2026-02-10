// CSC 134
// M2T1- Product 
// Keora James 
// 2/9/25
// We're going to make the simplest possible 
// "checkout" machine.
#include <iostream>
using namespace std; 


int main(){

    // Set up all variables
    string first_name, last_name, full_name; //holds customer name
    string product ="blueberries";
    double cost_each = 0.99;
    double total_cost;


    // Greet customer
    cout <<"Welcome to our "  << product <<  " store!" << endl;
    cout <<"What is your first name?" << endl;
    cin >> first_name;
    cout <<"What is your last name?" << endl;
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout <<"Nice to meet you, " << full_name << ", for shopping with us!" << endl;



    // Ask how much they'd like to purchase 
    // Give the result 





    return 0;// no errors
}