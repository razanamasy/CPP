#include "AMateria.hpp"
AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria cpy constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria string constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor  called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rs)
{
	this->_type = rs.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria general use() function (Don't use me, dunno why i'm not pure ...)" << std::endl;
}
