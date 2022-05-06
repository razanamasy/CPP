#include "Zombie.hpp"

void Zombie::announce( void ) const
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( string name )
{
	this->_name = name;
	this->announce();
	return ;
}

Zombie::Zombie() : _name("NoName")
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << _name << " destroyed" << std::endl;
	return ;
}