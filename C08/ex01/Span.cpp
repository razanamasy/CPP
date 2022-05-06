#include "Span.hpp"
#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 


Span::Span(void): _nMax(0), _nActual(0)
{
	//this->_myVector = NULL;
}

Span::Span(unsigned int n) : _nMax(n), _nActual(0)
{
}

Span::~Span(void)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

Span const & Span::operator=(Span const & rs)
{
	this->_myVector = rs.getVector();
	this->_nMax = rs.getNMax();
	this->_nActual = rs.getNActual();
	return (*this);
}

void Span::addNumber(int nb)
{
	if (this->_nActual > 0 && this->_nActual == this->_nMax)
		throw (Span::MaxNumberReachException());
	this->_myVector.push_back (nb);
	this->_nActual++;
}

unsigned int	Span::getNMax() const
{
	return (this->_nMax);
}
unsigned int	Span::getNActual() const
{
	return (this->_nActual);
}


std::vector<int> Span::getVector() const
{
	return (this->_myVector);
}

int Span::shortestSpan()
{
	if (this->_myVector.empty() || this->_myVector.size() == 1)
		throw (Span::NoDistanceException());

	std::vector<int> eachDiff;

	std::sort (this->_myVector.begin(), this->_myVector.end());
	for (std::vector<int>::iterator it = this->_myVector.begin(); it!=this->_myVector.end() - 1; ++it)
		eachDiff.push_back((*(it + 1) - *it > 0) ? *(it + 1) - *it : *it - *(it + 1));
	return (*std::min_element(eachDiff.begin(), eachDiff.end()));
}


int Span::longestSpan()
{
	if (this->_myVector.empty() || this->_myVector.size() == 1)
		throw (Span::NoDistanceException());
	int min = *std::min_element(this->_myVector.begin() , this->_myVector.end());
	int max = *std::max_element(this->_myVector.begin() , this->_myVector.end());
	return ((min - max < 0) ? (max - min) : (min - max));
}
