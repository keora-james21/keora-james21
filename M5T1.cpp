// CSC 134 
// M5T1- Intro to Functions
// Keora James 
// 3/30/26

#include <iostream>
using namespace std;

// The goal is 
// Creating one void function 
// and one value returning function 

// Function Prototypes (declarations)
void say_hello ();
int give_the_answer ();
int double_a_number (int num);

// Function Definitions
int main ()
{ 
    cout << "Hello from main()" << endl;
    say_hello
    int my_answer = give_the_answer();
    // now double the answer
    int twotimes=double_a_number(7);
    cout << "Here's another number: "<< twotimes << endl;
}