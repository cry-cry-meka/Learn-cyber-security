#include <iostream>
using namespace std;

// Declaration of a global variable named 'global_variable' initialized to 4
int global_variable = 4;

int main()
{
	// Prints the value of the global variable (4)
	cout << "Value of global variable: " << global_variable << endl;

	// Declares a new local variable with the same name 'global_variable' initialized to 2
	// This local variable *shadows* the global one within main()
	int global_variable = 2;

	// Prints the value of the local variable (2), not the global one anymore
	cout << "Value of global variable: " << global_variable << endl;

	cin.ignore(); // Pause before program ends
	return 0;
}
