// learncppactual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int a{ 5 };

// Function that requests three numbers to be entered by a user.
// Numbers that the user enters will then be displayed on the console.
int main()
{
    int x{ 5 };
    int y{};

    std::cout << "Hello World!\n";                                          // new line without flushing the buffer
    std::cout << "My integer x is currently " << x << "." << std::endl;     // new line with manual flush - I am done here so this makes sense
    std::cout << "Now it's your turn to enter numbers:\n";
    std::cin >> x;
    std::cin >> y;                                                          // the user can enter these in one line seperated by a space or in two enter commands
    std::cout << "You entered the numbers " << x << " and " << y << "!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
