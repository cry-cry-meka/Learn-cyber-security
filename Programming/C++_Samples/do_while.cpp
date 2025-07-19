#include <iostream> // Include the input-output stream library for console operations

int main()
{
   int user_value = 0; // Initialize variable to store the user's menu choice

   // do-while loop ensures the menu is shown at least once and repeats until user chooses to exit (3)
   do
   {
      // Display the menu options to the user
      std::cout << " 1 - Addition\n";
      std::cout << " 2 - Subtraction\n";
      std::cout << " 3 - Exit Program\n";
      std::cout << "Insert a number: ";

      std::cin >> user_value; // Read the user's choice
      std::cin.ignore();      // Ignore leftover newline character in input buffer

      // Process the user's choice
      switch (user_value)
      {
      case 1:
         // If user chooses 1, placeholder for addition logic
         std::cout << "Addition code\n";
         break; // Exit the switch statement

      case 2:
         // If user chooses 2, placeholder for subtraction logic
         std::cout << "Subtraction code\n";
         break; // Exit the switch statement

         // No case needed for 3, since loop will end when user_value == 3
      }

   } while (user_value != 3); // Repeat menu until user enters 3 to exit

   std::cout << "Bye"; // Print exit message

   std::cin.ignore(); // Pause program before exit (optional)

   return 0; // Indicate successful program termination
}
