#include <iostream> // Include input/output stream library

// Function to swap the values of two integers using pointers
void swap(int *x, int *y)
{
    int temp; // Temporary variable to hold a value during swapping

    temp = *x; // Store the value pointed to by x in temp
    *x = *y;   // Assign the value pointed to by y to the location pointed to by x
    *y = temp; // Assign the value stored in temp to the location pointed to by y
}

int main()
{
    int i, j; // Declare two integer variables

    i = 5;  // Initialize i with 5
    j = 10; // Initialize j with 10

    std::cout << "Before swap i is: " << i << " and j is: " << j << std::endl; // Print values before swap

    swap(&i, &j); // Call swap function with addresses of i and j

    std::cout << "After swap i is: " << i << " and j is: " << j; // Print values after swap

    std::cin.ignore(); // Pause program before exit (optional)
    return 0;          // Return 0 to indicate successful execution
}
