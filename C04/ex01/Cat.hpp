#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Brain.hpp"

class Cat : public Animal 
{
	public :

		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);

		void	setDefaultBrain();

		virtual ~Cat(void);

		virtual void setBrain(std::string idea);
		Brain * getBrain() const;

		void	makeSound(void) const;

		private :
			Brain * _myBrain;
};

#endif
