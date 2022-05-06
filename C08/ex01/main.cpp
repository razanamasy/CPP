#include "Span.hpp"
#include <iostream> 
#include <stdlib.h>
#include <time.h> 

int main()
{
	//NO DISTANCE EXCEPTION
	std::cout << "----- Try shortest with empty Span-----" << std::endl;
	Span tabNUll;
	try
	{
		std::cout << tabNUll.shortestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----- Try longest with only one Span-----" << std::endl;

	try
	{
		tabNUll.addNumber(80);
	}
	catch (Span::MaxNumberReachException & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << tabNUll.longestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;



	//TRY TO AUTOMATE FILL THEN REACH MAX WITH ONE MORE ADD
	std::cout << "---------------Create an array (int or other container )---------------" << std::endl;
	std::cout << "----- Then insert with range iterator of vector : 5 Element max-----" << std::endl;
	Span tab(5);

	int myarray [] = { -12, 3, 5, 65, 232 };

	std::vector<int> myvector;
	myvector.insert (myvector.begin(), myarray, myarray+5);

	try
	{
		tab.insertSpan(myvector.begin(), myvector.end());
	}
	catch (Span::RangeTooBigException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "----- Try to add another number (souldn't work because olready filled with range iterator)-----" << std::endl;
	try
	{
		tab.addNumber(80);
	}
	catch (Span::MaxNumberReachException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----Display shortest and longest-----" << std::endl;
	try 
	{
		std::cout << tab.shortestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		std::cout << tab.longestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	//TRY TO COPY
	std::cout << "-----Copy the tab then display the result of shortest and longest-----" << std::endl;
	Span cpyTab(tab);
	try 
	{
		std::cout << cpyTab.shortestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		std::cout << cpyTab.longestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}

	//TRY WITH 10 000
	std::cout << "---------------Create an array (int or other container )---------------" << std::endl;
	std::cout << "----- Then insert with range iterator of simple int tab : 10000 Element max-----" << std::endl;
	Span otherTab(10000);

	int otherArray [10000];

	srand (time(NULL));
	for (int i = 0; i < 10000; i++)
		otherArray[i] = rand() % 80000 + 1;

	try
	{
		otherTab.insertSpan(otherArray, otherArray+10000);
	}
	catch (Span::RangeTooBigException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----Display shortest and longest-----" << std::endl;
	try 
	{
		std::cout << otherTab.shortestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		std::cout << otherTab.longestSpan() << std::endl;
	}
	catch (Span::NoDistanceException & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
