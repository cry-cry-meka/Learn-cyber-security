#include <iostream> // Include input/output stream library
#include <string>   // Include string library (not used here but included)

// Entry point of the program
int main()
{
    int x[21]; // Declare an array of 21 integers (indices 0 to 20)
    int i;     // Declare a loop counter variable

    // Loop from i = 0 to i = 19 (20 iterations)
    for (i = 0; i < 20; ++i)
    {
        x[i] = i; // Assign the value of i to the ith element of the array
    }

    std::cin.ignore(); // Pause program before exit (optional)
    return 0;          // Return 0 to indicate successful execution
}
