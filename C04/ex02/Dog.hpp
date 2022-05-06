#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

class Dog : public AAnimal 
{
	public :

		Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);

		void setBrain(std::string idea);
		virtual Brain *	getBrain() const;

		void	setDefaultBrain();

		virtual ~Dog(void);

		virtual void	makeSound(void) const;
	private :
		Brain * _myBrain;

};

#endif
