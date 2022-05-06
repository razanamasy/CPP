#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout << "Cure cpy constructor called" << std::endl;
	*this = src;
}

Cure & Cure::operator=(Cure const & rs)
{
	this->_type = rs.getType();
	return *this;
}

Cure* Cure::clone() const
{
	Cure * myCureClone = new Cure();
	return (myCureClone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName();
	std::cout << "'s wounds *" << std::endl;
}
