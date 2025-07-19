#include <iostream> // Includes the iostream library for input and output operations

int main()
{
    int x = 5; // Declare an integer variable 'x' and initialize it with the value 5

    int *p1 = &x; // Declare a pointer 'p1' that stores the address of variable 'x'

    // Display the value of x
    std::cout << "The value of x is  : " << x << std::endl;

    // Display the memory address of x
    std::cout << "The value of &x (x address) is : " << &x << std::endl;

    // Display the value pointed to by p1 (value stored at the address held in p1)
    std::cout << "The value of p1 is : " << *p1 << std::endl;

    std::cin.ignore(); // Waits for user input to keep console window open

    return 0; // Return 0 to indicate successful program execution
}

/*
So what do we understand from this code ?
"" Pointers are variables that store the memory address of another variable. ""
*/