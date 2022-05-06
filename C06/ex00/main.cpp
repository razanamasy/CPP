#include <ostream>
#include <iostream>
#include <iomanip>

#include "Entity.hpp"

int main(int argc, char *argv[])
{
	std::cout << std::fixed << std::setprecision(1);
	try
	{
		if (argc != 2)
		{
			throw(BadParametre());
		}
		std::string maString = argv[1];
		Entity Chose(maString);
	}
	catch (BadParametre & e)
	{
		std::cout << e.what() << std::endl;
	}
}
