#include <iostream> // Includes the iostream library to enable input and output operations

int main() // Main function: starting point of the program
{
    int a; // Declares an integer variable 'a'

    // A for loop to print even numbers from 2 to 50
    for (a = 2; a <= 50; a = a + 2) // Initialize a to 2; loop while a <= 50; increment a by 2 each time
    {
        std::cout << a << "-"; // Outputs the current value of 'a' followed by a dash
    }

    std::cin.ignore(); // Waits for user input to keep the console window open

    return 0; // Returns 0 to indicate successful program termination
}
