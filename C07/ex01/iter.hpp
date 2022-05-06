#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
/*
template <typename T>
void   transform(T const & element)
{
	std::cout << static_cast<T>(element + 2)  << std::endl;
}

template <typename T, typename F>
void    iter(T * addTab, int sizeTab, F * func) {

    for (int i = 0 ; i < sizeTab; i++)
        func(addTab[i]);
}*/

template <typename T>
void   transform(T const & element)
{
	std::cout << static_cast<T>(element + 2)  << std::endl;
}

template <typename T>
void    iter(T * addTab, int sizeTab, void (*func)(T const & element)) {

    for (int i = 0 ; i < sizeTab; i++)
        func(addTab[i]);
}
#endif
