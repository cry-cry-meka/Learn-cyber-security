#include <iostream> // Include iostream library for input/output

int main()
{
  int user_value; // Variable to store the user's menu choice

  // Infinite loop, will keep running until 'break' is encountered
  for (;;)
  {
    // Display menu options to the user
    std::cout << " 1 - Addition\n 2 - Exit Program\n";
    std::cout << "Insert a number: ";

    std::cin >> user_value; // Read user input from console
    std::cin.ignore();      // Ignore leftover newline character in input buffer

    if (user_value == 1)
    {
      // If user selects option 1, print placeholder text
      std::cout << "Your addition source code here\n\n";
    }
    else if (user_value == 2)
    {
      // If user selects option 2, print goodbye message
      std::cout << "Bye";
      break; // Exit the infinite loop and end the program
    }
    else
    {
      // If user enters anything other than 1 or 2, print error message
      std::cout << "wrong data\n\n";
    }
  }

  std::cin.ignore(); // Pause program before closing (optional)
  return 0;          // Return 0 to indicate successful execution
}
