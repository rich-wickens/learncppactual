#include "io.h"

int main()
{
	int y{readNumber()};
	int x{readNumber()};
	writeAnswer(x + y);
	return 0;
}