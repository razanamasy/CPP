#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource ();
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();

		MateriaSource & operator=(MateriaSource const & rs);
		virtual void learnMateria(AMateria* materia);
		virtual AMateria* createMateria(std::string const & type) const;

		int isIce() const;
		int isCure() const;

	private :
		AMateria * _iceLearn;
		AMateria * _cureLearn;

};

#endif
