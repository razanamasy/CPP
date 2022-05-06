#include <iostream>
#include "Array.hpp"

#define MAX_VAL 12
#include <cstdlib>

int main(int, char**)
{
	
	std::cout << "-----Create an Array class of MAX_VAL integer and fill it with random numbers-----" << std::endl;
	std::cout << "-----Also create a int Array mirror of MAX_VAL integer and fill it with random numbers-----" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	
	std::cout << "-----If the values are the same then it will display :  ----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] == numbers[i])
		    std::cout << "Hey we have the same value, Mirror int : " << mirror[i] << " Array of int : " << numbers[i]<< std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Try to assign variable to the index -2 of array (not suppose to work)----" << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "-----Try to assign variable 39 to the index MAX_VAL - 1 of array (suppose to work)----" << std::endl;
	try
	{
		numbers[MAX_VAL - 1] = 39;
		std::cout << numbers[MAX_VAL - 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	std::cout << "-----Copy constructor and Assignation in a SCOPE (after modification of nnumbers)----" << std::endl;
		std::cout << std::endl;

		std::cout << "-----Affichage numbers----" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			    std::cout << numbers[i] << std::endl;
		}
		std::cout << std::endl;

		std::cout << "-----Affichage tmp----" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			    std::cout << tmp[i] << std::endl;
		}
		std::cout << std::endl;

		std::cout << "-----Affichage test----" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			    std::cout << test[i] << std::endl;
		}
	}
	//SAME BUT OUTSIDE THE SCOPE
	Array<int> tmp = numbers;
	Array<int> test(tmp);
	std::cout << "-----Copy constructor and Assignation OUTSIDE a SCOPE (after modification of nnumbers)----" << std::endl;
	std::cout << std::endl;

	std::cout << "-----Affichage numbers----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		    std::cout << numbers[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Affichage tmp----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		    std::cout << tmp[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Affichage test----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		    std::cout << test[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Get the Size's tabs : numbers, tmp then test----" << std::endl;
	std::cout << numbers.size() << std::endl;
	std::cout << tmp.size() << std::endl;
	std::cout << test.size() << std::endl;
	std::cout << std::endl;

	std::cout << "-----DEEP COPYING when assignation and = is proven here (modify tabs)----" << std::endl;
	try
	{
		numbers[MAX_VAL - 1] = 39;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		tmp[3] = 20;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		test[7] = 30;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "-----Affichage numbers----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		    std::cout << numbers[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Affichage tmp----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		    std::cout << tmp[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Affichage test----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		    std::cout << test[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Create charTab----" << std::endl;
	Array<char> tabChar(MAX_VAL * 2);
	srand (time(NULL));
	for (int i = 0; i < MAX_VAL * 2; i++)
	{
		tabChar[i] = rand() %  95 + 32;
	}
	for (int i = 0; i < MAX_VAL * 2; i++)
	{
		    std::cout << tabChar[i] << std::endl;
	}
	std::cout << "-----Instanciate Default char array (empty tab)----" << std::endl;
	Array<char> copyChar;
	std::cout << std::endl;

	std::cout << "-----Try to access void char array----" << std::endl;
	copyChar[1] = 'a';
	std::cout << std::endl;

	std::cout << "-----Copy charTab with assignation----" << std::endl;
	copyChar = tabChar;

	for (int i = 0; i < MAX_VAL * 2; i++)
	{
		    std::cout << copyChar[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----Instanciate Default double array (empty tab)----" << std::endl;
	Array<double> tocpy(2);
	tocpy[0] = 1;
	tocpy[1] = 2;
	Array<double> tabDouble;

	std::cout << "-----Try to access void double array----" << std::endl;
	tabDouble[3] = 1;

	std::cout << "-----Copy tocpy  with assignation----" << std::endl;
	tabDouble = tocpy;

//	std::cout << "-----Instanciate Default float array (and do nothing with it)----" << std::endl;
//	Array<float> tabFloat;
	delete [] mirror; 
	return 0;
}
