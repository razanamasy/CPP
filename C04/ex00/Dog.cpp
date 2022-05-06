#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Constructor dog called" << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Destructor dog called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF" << std::endl;
}
