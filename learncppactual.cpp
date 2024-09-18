// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


// a function that:
// 1. take user integer input in one line
// 2. doubles the input and outputs it on the second line
// 3. triples the input and outputs it on the third line
int main()
{
	std::cout << "Enter an integer: ";

	int num{};
	std::cin >> num;

	std::cout << "Double that number is: " << num * 2 << '\n';
	std::cout << "Triple that number is: " << num * 3 << '\n';

	return 0;
}