#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & rs);
		virtual ~Ice();
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
