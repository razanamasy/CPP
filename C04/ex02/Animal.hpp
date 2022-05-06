#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#include "Brain.hpp"
class AAnimal 
{
	public :

		AAnimal(void);
		AAnimal(AAnimal const & src);
		AAnimal & operator=(AAnimal const & rhs);
		std::string	getType() const;
		void	setType(std::string type);

		virtual Brain * getBrain() const = 0;
		virtual ~AAnimal(void);

		virtual void	makeSound(void) const = 0;

	protected : 

		std::string _type;
};

#endif
