#include <iostream> // Include the input-output stream library for std::cin and std::cout

int main()
{
	// Variables declaration and initialization
	int a = 0;		 // Initialize variable 'a' with 0
	int b = 2;		 // Initialize variable 'b' with 2
	int sum = a + b; // Calculate sum of 'a' and 'b' and store it in 'sum'

	// Output the current value of 'sum' to the console
	std::cout << "The value of variable sum is: " << sum << std::endl;

	a = 3; // Change the value of 'a' to 3

	sum = a + b; // Recalculate sum with the new value of 'a'

	// Output the updated value of 'sum' to the console
	std::cout << "The value of variable sum is: " << sum << std::endl;

	std::cin.ignore(); // Wait for user input to prevent the console from closing immediately
	return 0;		   // Return 0 to indicate successful program termination
}
