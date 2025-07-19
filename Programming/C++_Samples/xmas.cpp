#include <iostream>

int main()
{
	int i, j, lines;

	std::cout << "Please enter a number " << std::endl; // Prompt user for input
	std::cin >> lines;									// Read number of lines
	std::cin.ignore();									// Clear input buffer

	// Outer loop: j goes from 1 to (lines * 2) in steps of 2 (1, 3, 5, ...)
	for (j = 1; j <= lines * 2; j = j + 2)
	{
		// Print spaces to center the stars on the current line
		for (i = j; i <= lines * 2 - 2; i = i + 2)
		{
			std::cout << " ";
		}
		// Print stars for the current line
		for (i = 1; i <= j; i++)
		{
			std::cout << "*";
		}
		std::cout << std::endl; // Move to next line
	}

	std::cin.ignore(); // Pause the program before exiting
}
