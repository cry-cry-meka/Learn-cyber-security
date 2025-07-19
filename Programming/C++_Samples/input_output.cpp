#include <iostream> // Includes the iostream library for input and output operations

int main()
{
    int uservalue; // Declares an integer variable to store the user's input

    std::cout << "This program adds 10 to your input." << std::endl; // Display program purpose
    std::cout << "Please insert your input: ";                       // Prompt the user to enter a number

    std::cin >> uservalue; // Read user input and store it in 'uservalue'

    // Display the original and the new value after adding 10
    std::cout << "The value inserted is " << uservalue;
    std::cout << " and the new value is " << uservalue + 10 << std::endl;

    std::cin.ignore();                     // Clears the input buffer (useful in some IDEs)
    std::cout << "Press Enter To Exit..."; // Prompt to press Enter before exiting
    std::cin.ignore();                     // Waits for user input to keep the console window open

    return 0; // Return 0 to indicate successful program termination
}
