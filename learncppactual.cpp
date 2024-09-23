#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

int main()
{
	PLOGD << "main() called";
	
	return 0;
}