#ifndef EASY_FIND
# define EASY_FIND
#include <iostream>
#include <algorithm>

class notFoundException : public std::exception {

		public :
				virtual const char* what() const throw()
				{
					return "Exception : Value not found";
				}
};

template <typename T>
typename T::iterator easyfind(T container, int toFind) {
	
		typename T::iterator resPtr = std::find(container.begin(), container.end(), toFind);
	if (resPtr != container.end())
	{
		std::cout << "I found the value : " << toFind << std::endl;
		return (resPtr);
	}
	else
		throw (notFoundException()); 
}

#endif
