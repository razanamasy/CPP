#ifndef Character_HPP
# define Character_HPP

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & src);
		virtual ~Character();
		ICharacter & operator=(Character const & rs);

		virtual std::string const & getName() const;
		int	getNbMateria() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria * collectLeftOvers(int idx) const;

	private :
		AMateria * _inventaire[4];
		AMateria * _leftMateria;
		int	_nbMateria;
		std::string _name;
};

#endif
