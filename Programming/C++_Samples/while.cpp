#include <iostream> // Include the iostream library for input/output

int main()
{
   int user_value = 0; // Initialize user_value to 0 to enter the loop

   // Loop continues until user enters 3 to exit
   while (user_value != 3)
   {
      // Display menu options
      std::cout << " 1 - Addition\n";
      std::cout << " 2 - Subtraction\n";
      std::cout << " 3 - Exit Program\n";
      std::cout << "Insert a number: ";

      std::cin >> user_value; // Read user input
      std::cin.ignore();      // Ignore leftover newline character in input buffer

      // Decide action based on user input
      switch (user_value)
      {
      case 1:
         std::cout << "Addition code\n"; // Placeholder for addition logic
         break;
      case 2:
         std::cout << "Subtraction code\n"; // Placeholder for subtraction logic
         break;
         // No need for default, loop repeats if input isn't 1,2, or 3
      }
   }

   std::cout << "Bye"; // Print goodbye message after exiting loop
   std::cin.ignore();  // Pause program before exiting (optional)
   return 0;           // Indicate successful program termination
}
