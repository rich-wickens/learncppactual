// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{

}


int main()
{
	int x;			// uninitialized variable

	doNothing(x);
	std::cout << x << '\n';	// expect this to print something unpredictable to the console. It's converting whatever was in that RAM slot to an integer!

	std::cout << sizeof(int) << '\n'; // on my platform this produces 4, on some platforms 2. This is an example of implementation defined behaviour to avoid.

	return 0;
}


