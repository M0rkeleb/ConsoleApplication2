// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "add.h"


int main()
{
	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
	std::cout << "The difference of 3 and 4 is: " << subtract(3, 4) << std::endl;
	return 0;
}

