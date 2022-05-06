#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

class Cat : public Animal 
{
	public :

		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);

		virtual ~Cat(void);

		virtual void	makeSound(void) const;
};

#endif
