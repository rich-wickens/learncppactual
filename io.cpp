#include "io.h"
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