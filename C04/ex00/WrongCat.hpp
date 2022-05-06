#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>

class WrongCat : public WrongAnimal 
{
	public :

		WrongCat(void);
		WrongCat(WrongCat const & src);
		WrongCat & operator=(WrongCat const & rhs);

		virtual ~WrongCat(void);

		virtual void	makeSound(void) const;
};

#endif
