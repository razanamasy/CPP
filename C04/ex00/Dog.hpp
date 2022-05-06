#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

class Dog : public Animal 
{
	public :

		Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);

		virtual ~Dog(void);

		virtual void	makeSound(void) const;
};

#endif
