#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

int main()
{
	plog::init(plog::debug, "Logfile.txt");

	PLOGD << "main() called";
	
	return 0;
}