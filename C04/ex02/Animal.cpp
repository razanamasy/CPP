#include "Animal.hpp"

AAnimal::~AAnimal()
{
	std::cout << "Destructor animal called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->_type = rhs.getType();
	//ANIMAL DON'T HAVE ANY BRAIN -> TO COPY BRAIN USE DOG AND CAT CLASS
	return (*this);
}

AAnimal::AAnimal(void)
{
	std::cout << "Default AAnimal constructor that is not intanciable (you can try)" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}