#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

class Cat : public AAnimal 
{
	public :

		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);

		void setBrain(std::string idea);
		virtual Brain *	getBrain() const;

		void	setDefaultBrain();

		virtual ~Cat(void);

		virtual void	makeSound(void) const;
	private :
		Brain * _myBrain;
};

#endif
