#include "Weapon.hpp"

Weapon::~Weapon(void)
{}

Weapon::Weapon(string type) : _type(type)
{
	return ;
}

string const &Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(string	newType)
{
	this->_type = newType;
}
