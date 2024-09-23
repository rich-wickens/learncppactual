// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int add(int x, int y);

int main()
{
	std::cout << "Enter two numbers to add together: ";

	int x{};
	int y{};
	std::cin >> x >> y;

	std::cout << add(x, y);
	
	return 0;
}