// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int doubleNumber(int x) 
{;
	return 2 * x;
}

int main()
{
	std::cout << "Enter a number to be doubled: ";
	int a;
	std::cin >> a;
	std::cout << doubleNumber(a) << '\n';

	return 0;
}