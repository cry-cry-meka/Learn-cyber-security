#include <iostream> // Include input/output stream library

int main()
{
	// Loop from x = 0 to x = 100 inclusive
	for (int x = 0; x <= 100; x++)
	{
		std::cout << x << ","; // Print current value of x followed by a comma
	}

	std::cin.ignore(); // Pause the program before exiting (optional)
}
