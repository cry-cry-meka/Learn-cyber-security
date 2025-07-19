#include <iostream> // Includes the iostream library for input and output operations

int main()
{
  int user_value; // Declares an integer variable to store user input

  std::cout << "Insert a number\n"; // Prompts the user to input a number

  std::cin >> user_value; // Takes input from the user and stores it in 'user_value'

  std::cin.ignore(); // Clears the input buffer to prevent any unwanted behavior

  // Checks if the input value is less than 10
  if (user_value < 10)
  {
    std::cout << "The value is less than 10"; // Message if value is less than 10
  }
  else
  {
    std::cout << "The value is greater than 10"; // Message if value is 10 or greater
  }

  std::cout << "\nPress Enter To Exit..."; // Prompts user to press Enter before exiting

  std::cin.ignore(); // Waits for the user to press Enter (keeps console open)

  return 0; // Indicates that the program ended successfully
}
