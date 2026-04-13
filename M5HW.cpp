// CSC 134
// M5HW- Bronze 
// Keora James 
// 04/13/26

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    cout<< "Question 1: Rainfall Average Calculator\n";
    string month1, month2, month3;
    double rain1, rain2, rain3;
    double average;
    
    // Get input from user
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the rainfall for " << month1 << " (in inches): ";
    cin >> rain1;
    
    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the rainfall for " << month2 << " (in inches): ";
    cin >> rain2;
    
    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the rainfall for " << month3 << " (in inches): ";
    cin >> rain3;
    
    // Calculate average
    average = (rain1 + rain2 + rain3) / 3.0;
    
    // Display results
    cout << "\nRainfall Summary:\n";
    cout << month1 << ": " << rain1 << " inches\n";
    cout << month2 << ": " << rain2 << " inches\n";
    cout << month3 << ": " << rain3 << " inches\n";
    cout << "\nThe average rainfall for these months is: " << fixed << setprecision(2) << average << " inches\n";
    
cout<<"----------------------------------------------\n";
cout << "\nQuestion 2: Block Volume Calculator\n";
    double width, length, height;
    double volume;
    
    // Get dimensions from user
    cout << "\n=== Block Volume Calculator ===\n";
    cout << "Enter the width of the block: ";
    cin >> width;
    
    cout << "Enter the length of the block: ";
    cin >> length;
    
    cout << "Enter the height of the block: ";
    cin >> height;
    
    // Input validation
    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "\nError: No side of the block can be zero or less.\n";
        cout << "Please enter positive values for width, length, and height.\n";
    } else {
        // Calculate volume
        volume = width * length * height;
        
        // Display results
        cout << "\n=== Block Dimensions ===\n";
        cout << "Width: " << width << "\n";
        cout << "Length: " << length << "\n";
        cout << "Height: " << height << "\n";
        cout << "\nVolume of the block: " << fixed << setprecision(2) << volume << " cubic units\n";
    }
cout<<"----------------------------------------------\n";
cout << "\nQuestion 3: Roman Numeral Converter\n";
    int number;
    string roman;
    
    // Get number from user
    cout << "Enter a number between 1 and 10: ";
    cin >> number;
    
    // Input validation and Roman numeral conversion
    if (number < 1 || number > 10) {
        cout << "\nError: Please enter a number between 1 and 10.\n";
    } else {
        // Use switch statement to convert to Roman numeral
        switch (number) {
            case 1:
                roman = "I";
                break;
            case 2:
                roman = "II";
                break;
            case 3:
                roman = "III";
                break;
            case 4:
                roman = "IV";
                break;
            case 5:
                roman = "V";
                break;
            case 6:
                roman = "VI";
                break;
            case 7:
                roman = "VII";
                break;
            case 8:
                roman = "VIII";
                break;
            case 9:
                roman = "IX";
                break;
            case 10:
                roman = "X";
                break;
        }
        
        cout << "\nNumber: " << number << "\n";
        cout << "Roman Numeral: " << roman << "\n";
    }
cout<<"----------------------------------------------\n";


    return 0;
} 
