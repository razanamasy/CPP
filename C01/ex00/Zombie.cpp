#include "Zombie.hpp"

using std::cout;
using std::cin;
using std::endl;

void Zombie::announce( void ) const
{
	cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie( string	name ) : _name(name)
{
	return ;
}

Zombie::~Zombie( void )
{
	cout << "Zombie " << _name << " destroyed" << endl;
	return ;
}
