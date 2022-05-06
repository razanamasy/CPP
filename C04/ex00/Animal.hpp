#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal 
{
	public :

		Animal(void);
		Animal(Animal const & src);
		Animal(std::string animal); 
		Animal & operator=(Animal const & rhs);
		std::string	getType() const;
		virtual void	setType(std::string type);

		virtual ~Animal(void);

		virtual void	makeSound(void) const;

	protected : 

		std::string _type;
};

#endif
