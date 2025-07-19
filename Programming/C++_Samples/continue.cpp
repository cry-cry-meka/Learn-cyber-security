#include <iostream> // Include the input-output stream library for cin and cout

int main()
{
    int user_value; // Variable to store the user's input number
    int even = 0;   // Counter to keep track of even numbers entered
    int odd = 0;    // Counter to keep track of odd numbers entered

    // Loop exactly 5 times to get 5 numbers from the user
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Insert a number: "; // Prompt the user to insert a number
        std::cin >> user_value;           // Read the number from user input
        std::cin.ignore();                // Ignore the newline character left in the input buffer

        // Check if the number is even
        if (user_value % 2 == 0)
        {
            ++even;   // If even, increment the even counter
            continue; // Skip the rest of the loop and go to the next iteration
        }
        ++odd; // If the number is not even, increment the odd counter
    }

    // Output the count of even and odd numbers entered
    std::cout << std::endl
              << "even: " << even << " - odd: " << odd;

    std::cin.ignore(); // Pause the program (wait for user input) before closing (optional)
    return 0;          // Return 0 to indicate successful execution of the program
}
