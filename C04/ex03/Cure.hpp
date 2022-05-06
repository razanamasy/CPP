#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(Cure const & src);
		Cure & operator=(Cure const & rs);
		virtual ~Cure();
		Cure* clone() const;
		void  use(ICharacter& target);
};

#endif
