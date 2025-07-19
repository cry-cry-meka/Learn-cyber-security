#include <iostream> // Include the iostream library for input/output operations

int main()
{
      int base, height; // Declare variables to store the base and height of the rectangle

      std::cout << "Insert the base length: "; // Prompt the user to enter the base length
      std::cin >> base;                        // Read the base length from user input

      std::cout << "Insert the height length: "; // Prompt the user to enter the height length
      std::cin >> height;                        // Read the height length from user input

      std::cin.ignore(); // Ignore the newline character left in the input buffer

      std::cout << std::endl; // Print a blank line for better formatting

      // Outer loop: runs once for each row (from 0 up to height-1)
      for (int i = 0; i < height; i++)
      {
            // Inner loop: runs once for each column in a row (from 0 up to base-1)
            for (int j = 0; j < base; j++)
            {
                  std::cout << " *"; // Print a star with a leading space for formatting
            }
            std::cout << std::endl; // Move to the next line after printing one row
      }

      std::cin.ignore(); // Pause the program (wait for user input) before closing (optional)
      return 0;          // Return 0 to indicate successful program termination
}
