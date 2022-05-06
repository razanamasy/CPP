#include "Animal.hpp"

Animal::Animal(std::string animal) : _type(animal) 
{
	std::cout << "string Constructor animal called" << std::endl;
}

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Default Constructor animal called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Destructor animal called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

Brain * Animal::getBrain() const
{
	std::cout << "Don't use me please" << std::endl;
	return (NULL);
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Sound of earth " << std::endl;
}
