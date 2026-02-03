// CSC 134
// M1LAB
// Keora James 
// 02/03/2026

#include <iostream>
using namespace std;

int main() {
// This program will simulate an apple orchard.
// the owner's name 
  string name= "Keora James";
// number of apple owned 
   apples=100  ;
  //price per apple
  double pricePerApple= 0.25;

  // calculate the total price of the apples
  //double totalPrice= (double) apples * pricePerApple;

  //print all information about the orchard 
cout << "Welcome to " << name << "'s apple orchard!\n";
cout << "We have " << apples<< " apples in stock\n";
cout << "Apple are currently $" << pricePerApple <<" each " ".\n";
// Final line to print totalPrice
  cout << "If you want them all, that will be $" << apples * pricePerApple << "\n";
  