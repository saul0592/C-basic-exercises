// This program calculates the circumference of a circle.
#include <iostream>
using namespace std;// to do not use iostream::cout instead of only cout

int main()
{
	// Constants
	const double PI = 3.14159;
	const double DIAMETER = 10.0;

	// Variable to hold the circumference
	double circumference;

	// Calculate the circumference.
	circumference = PI * DIAMETER;

	// Display the circumference.
	cout << "The circumference is: " << circumference << endl;
	cout << "Saul Mendoza ID 24423950\n"; // \n new line
	cout << "\tID 24423950\t" << endl; // \t tab
	return 0;

}