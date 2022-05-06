#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	std::cout << "Ice cpy constructor called" << std::endl;
	*this = src;
	return ;
}

Ice & Ice::operator=(Ice const & rs)
{
	this->_type = rs.getType();
	return *this;
}

Ice* Ice::clone() const
{
	Ice * myIceClone = new Ice();
	return (myIceClone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName();
	std::cout << " *" << std::endl;
}
