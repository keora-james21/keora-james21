// CSC 134
// M4T1 - While
// Keora James 
// 3/10/2026


#include <iostream>
using namespace std;
  
int main()
{

    // Part 1, just say "hi" five times
    int count = 1;
    while (count < 5) {
        cout << "Hello number " << count << endl;
        // count = count + 1;
        count++; // shorter version of the above line
    }
cout << "That's all" << endl;
// program 5-6
const int MIN_NUMBER = 1;
const int MAX_NUMBER = 10;

int num = MIN_NUMBER;
// print table number 
cout << "Number  Number Squared" << endl;


while (num <= MAX_NUMBER) {
    cout << num << " "<< num*num << endl;
    num++;
}
    return 0; // done
}