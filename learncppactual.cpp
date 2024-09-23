// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int readNumber()
{
	int x{};
	std::cout << "Enter a number to add: ";
	std::cin >> x;

	return x;
}

void writeAnswer(int x)
{
	std::cout << "The answer is " << x;
}

int main()
{
	int y{};
	int x{};

	x = readNumber();
	y = readNumber();

	writeAnswer(x + y);
	
	return 0;
}