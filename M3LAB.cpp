// CSC 134
// M3LAB
//Keora James 
// 3/3/226

#include <iostream>
using namespace std;

// This program will ask a ask question and then respond
int main() {
	// Declare the variable we need 
	int choice; 

	// ask the question 
	cout<< "Hello, player! Choose between the 3 doors"<< endl; 
	cout<< "But be careful! Each door has a different outcome!"<< endl;
	cout<< "Type 1-3: ";
	cin >> choice;
//  using if statements to determine the outcome of the game
    if (choice == 1) {
        cout << "OH NO! You opened the door and the Chainsaw Man is behind it!" << endl;
    
    }
    if (choice == 2) {
        cout << "You opened the door and found a treasure chest!" << endl;
        
    }
    if (choice == 3) {
        cout << "You opened the door and found a safe place to rest!" << endl;
    
    }
   
    if (choice < 1 || choice > 3) {
        cout << "Invalid choice! Please choose a number between 1 and 3." << endl; }

    // End of the program
    cout << "Thanks for playing!" << endl; // this runs no matter what is chosen 
    return 0; // exit without error
}