#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
using std::string;

class	Zombie {

public :

	Zombie( string name );
	~Zombie( void );

	void announce( void ) const;

private :

	string	_name;
};

Zombie*	newZombie( string name );
void	randomChump( string name );

#endif