#include <iostream>

int var = 1; // Global variable initialized to 1

// Function that takes two integers x and y and returns their sum
int sum(int x, int y)
{
	int z;
	z = x + y; // Adds x and y (now correctly using both parameters)
	return z;  // Return the result
}

int main()
{
	int a, b, result; // Declare variables for user inputs and result

	std::cout << "Please enter two numbers: " << std::endl; // Ask user for two numbers

	std::cin >> a;	   // Read first number
	std::cin.ignore(); // Ignore leftover newline

	std::cin >> b;	   // Read second number
	std::cin.ignore(); // Ignore leftover newline

	result = sum(a, b); // Call sum function using both a and b

	// Print the result with explanation
	std::cout << "The result of " << a << " + " << b << " is " << result << std::endl;

	std::cin.ignore(); // Pause program before exit (optional)
}
