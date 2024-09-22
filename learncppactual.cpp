// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int doubleNumber(int x) 
{
	x = x * 2;
	return x;
}

int main()
{
	std::cout << doubleNumber(2);

	return 0;
}