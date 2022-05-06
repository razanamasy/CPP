#ifndef		WEAPON_HPP
# define	WEAPON_HPP

#include <iostream>
using std::string;

class	Weapon {
	public :
		Weapon(string type);
		~Weapon(void);

		string const  &getType(void) const;
		void setType(string	newType);

	private :
		string	_type;
};

#endif