// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


// a function that:
// 1. requests the user to input an integer on one line
// 2. requests the user to input a second integer on a second line
// 3. displays what the first integer plus the second integer is on a third line
// 4. displays what the first integer minus the second integer is on the fourth line
int main()
{
	std::cout << "Enter and integer: ";

	int x{};
	std::cin >> x;
	std::cout << "Enter another integer: ";
	
	int y{};
	std::cin >> y;
	std::cout << x << " + " << y << " is " << x + y << ".\n";
	std::cout << x << " - " << y << " is " << x - y << ".\n";

	return 0;
}