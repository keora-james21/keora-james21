// CSC 134 
// M3LAB2
// Keora James 
// 3/3/2026


#include <iostream>
using namespace std; 

int main() {
    double grade;
    string first_name, last_name, full_name;

    // Greet student 
    cout<< " Hello, student! Please enter your first and last name to access your grade for C++"<< endl;
    cin>> first_name;
    cout << "Last name?"<< endl; 
    cin>> last_name; 
    full_name= first_name + " " + last_name; 
    cout << "Grettings "<< full_name<< "! Here is the summary for your grades!"<< endl;

    // Enter numeric grades 
    cout<< "Enter your numberic grade (0-100): "<< endl; 
    cin>> grade;
    if (grade < 0 || grade>100){
        cout << "Invalid. Please enter a number between 0 and 100"<<endl;
    
    }
    else if (grade >=90){
        cout<< "Your grade is an A"<< endl;
    }
    else if (grade>=80){
        cout<< "Your grade is a B"<< endl;
        }
        else if (grade>=70){
            cout << "Your grade is a C"<< endl;
        }
        else if (grade>=60){
            cout<< "Your grade is a D"<< endl;
        
        }
        else if (grade<=50){
            cout << "Your grade is a F"<< endl;
        }
        return 0;
}