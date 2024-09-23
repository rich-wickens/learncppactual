// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int readNumber();
void writeAnswer(int x);


int main()
{
	int y{readNumber()};
	int x{readNumber()};
	writeAnswer(x + y);
	return 0;
}