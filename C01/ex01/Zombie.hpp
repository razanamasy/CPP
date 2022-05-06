#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
using std::string;

class	Zombie {

public :

	Zombie();
	~Zombie( void );
	void	setName( string name );
	void announce( void ) const;

private :

	string	_name;
};

Zombie* zombieHorde( int N, string name );

#endif