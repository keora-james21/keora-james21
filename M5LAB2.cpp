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
          
        }
  }
  std::cout << "You picked option #" << choice << std::endl;
  return choice;
}

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
  int size = 5; // Example size
  get_choice(size);
  double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
  return 0;
}

double getLength() {
  double length;
  std::cout << "Enter the rectangle's length: ";
  std::cin >> length;
  return length;
}

double getWidth() {
  double width;
  std::cout << "Enter the rectangle's width: ";
  std::cin >> width;
  return width;
}

double getArea(double length, double width) {
  return length * width;
}

void displayData(double length, double width, double area) {
  std::cout << "Length: " << length << std::endl;
  std::cout << "Width: " << width << std::endl;
  std::cout << "Area: " << area << std::endl;
}