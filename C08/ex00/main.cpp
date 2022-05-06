#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>

int main()
{
		std::vector<int> intVector;
		intVector.push_back(1);
		intVector.push_back(2);
		intVector.push_back(3);
		intVector.push_back(4);

		std::list<int> intList;
		intList.push_back(5);
		intList.push_back(6);
		intList.push_back(7);
		intList.push_back(8);
		
		std::deque<int> intDeque;

		std::vector<int>::iterator isFindVect;
		try
		{
			std::cout << "In vector : ";
			isFindVect = easyfind(intVector, 1);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::list<int>::iterator isFindList;
		try
		{
			std::cout << "In list : ";
			isFindList = easyfind(intList, 4);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}

		std::deque<int>::iterator isFindDeque;
		try
		{
			std::cout << "In deque : ";
			isFindDeque = easyfind(intDeque, 4);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		return (0);
}
