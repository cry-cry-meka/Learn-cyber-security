#include <iostream>

// Function that takes an integer x, adds 10 to it, and returns the result
int sum(int x)
{
    x = 10 + x; // Add 10 to the local copy of x
    return x;   // Return the new value
}

int main()
{
    int x = 5; // Initialize x with 5

    // Call sum(x), which returns 15 (10 + 5), and print the result
    std::cout << "The result of 10 + " << x << " is " << sum(x) << std::endl;

    // Print the original value of x to show it is unchanged
    std::cout << "Value of x is still " << x;

    std::cin.ignore(); // Pause the program before exit (optional)
}
