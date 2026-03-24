// CSC 134
// M4HW1- Silver
// Keora James 
// 3/24/26

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Question 1
    cout << "Question 1" << endl;
    double num1, num2; 
    cout <<"Enter the first number of the probelm"<<endl;
    cin>> num1;

    cout<< "Enter the second number of the problem"<<endl;
    cin>> num2; 

    double result= num1*num2;
    cout << num1<< " times "<< num2 << " is "<<result << endl;

cout << "____________________________________________________________" << endl;

    //Question 2
    cout << "Question 2" << endl;
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 12;
    double num3, num4;

    cout << "Enter the first number 1-12" << endl;
    cin >> num3;
if (num3 < MIN_NUMBER || num3 > MAX_NUMBER) {
        cout << "Invalid input. Please enter a number between " << MIN_NUMBER << " and " << MAX_NUMBER << "." << endl;
    } else {
    cout << "Enter the second number 1-12" << endl;
    cin >> num4;
if (num4 < MIN_NUMBER || num4 > MAX_NUMBER) {
        cout << "Invalid input. Please enter a number between " << MIN_NUMBER << " and " << MAX_NUMBER << "." << endl;
    } else {
        double result2 = num3 * num4;
        cout << num3 << " times " << num4 << " is " << result2 << endl;
    }
    }

    return 0;
}