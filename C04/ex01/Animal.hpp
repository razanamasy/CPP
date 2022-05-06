#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#include "Brain.hpp"
class Animal 
{
	public :

		Animal(void);
		Animal(Animal const & src);
		Animal(std::string animal); 
		Animal & operator=(Animal const & rhs);
		std::string	getType() const;
		void	setType(std::string type);

		virtual Brain * getBrain() const;
		virtual ~Animal(void);

		virtual void	makeSound(void) const;

	protected : 
		std::string _type;
};

#endif
