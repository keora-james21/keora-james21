// CSC 134
// M5LAB2
// Keora James 
// 03/30/26

// requires #include <limits>
#include <iostream>
#include <limits>

int get_choice(int size) {
  // Only allow choices between 1 and size
  int choice=0;
  while (choice < 1 || choice > size) {
    std::cout << "Choose: ";
    std::cin >> choice;
        // Check if the input is valid
        if (std::cin.fail()) {
          std::cin.clear(); // Clear the error flag
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
          std::cout << "Invalid input. Please enter a number between 1 and " << size << "." << std::endl;
        }
  }
  std::cout << "You picked option #" << choice << std::endl;
  return choice;
}