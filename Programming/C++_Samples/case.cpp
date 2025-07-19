#include <iostream> // Includes the iostream library for input and output operations

int main() // Main function: entry point of the program
{
   int user_value; // Declares an integer variable to store the user's choice

   std::cout << " 1 - Addition\n 2 - Subtraction\n 3 - Multiplication\n 4 - Division \n 5 - Exit Program\n"; // Displays a menu with numbered options

   std::cout << "Insert a number: "; // Prompts the user to input a number

   std::cin >> user_value; // Reads the user's input and stores it in user_value
   std::cin.ignore();      // Clears the input buffer to prevent any leftover characters

   // A switch statement to perform different actions based on the user's input
   switch (user_value)
   {
   case 1:                        // If user_value is 1
      std::cout << "Addition";    // Output "Addition"
      break;                      // Exit the switch block
   case 2:                        // If user_value is 2
      std::cout << "Subtraction"; // Output "Subtraction"
      break;
   case 3:                           // If user_value is 3
      std::cout << "Multiplication"; // Output "Multiplication"
      break;
   case 4:                     // If user_value is 4
      std::cout << "Division"; // Output "Division"
      break;
   case 5:                 // If user_value is 5
      std::cout << "Bye!"; // Output "Bye!" and simulate program exit
      break;
   default:                       // If user_value doesn't match any valid case
      std::cout << "Wrong input"; // Output error message
   }

   std::cin.ignore(); // Waits for user input before closing ( useful TO PAUSE THE CONSOLE )

   return 0; // Returns 0 to indicate the program ended successfully
}
