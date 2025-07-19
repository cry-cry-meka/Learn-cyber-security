#include <iostream> // Include input/output stream library

int main()
{
    int x = 206; // Initialize integer x with value 206
    int y = 152; // Initialize integer y with value 152

    int z = x & y;                             // Perform bitwise AND between x and y, store result in z
    std::cout << "Bitwise AND: " << z << "\n"; // Print the result of bitwise AND

    z = x | y;                                // Perform bitwise OR between x and y, store result in z
    std::cout << "Bitwise OR: " << z << "\n"; // Print the result of bitwise OR

    x = x << 1;                                     // Left shift the bits of x by 1 (multiply by 2)
    std::cout << "Left shift 1 bit: " << x << "\n"; // Print the shifted value of x

    std::cin.ignore(); // Pause program before exit (optional)
    return 0;          // Return 0 to indicate successful execution
}
