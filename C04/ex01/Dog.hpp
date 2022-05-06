#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

#include "Brain.hpp"

class Dog : public Animal 
{
	public :

		Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		virtual ~Dog(void);
	
		void	setDefaultBrain();


		void setBrain(std::string idea);
		virtual Brain * getBrain() const;
		void	makeSound(void) const;

	private :
			Brain * _myBrain;
};

#endif
