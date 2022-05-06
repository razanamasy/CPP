#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string animal) : _type(animal) 
{
	std::cout << "string Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(void) : _type("Animal")
{
	std::cout << "Default Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Sound of Wrongearth " << std::endl;
}
