#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Constructor cat called" << std::endl;
}

Cat::Cat(Cat const & src)
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Destructor cat called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEAOW" << std::endl;
}
