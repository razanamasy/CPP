#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default Constructor Wrongcat called" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "Copy Wrongcat constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WRONGMEAOW" << std::endl;
}
