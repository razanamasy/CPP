#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
	public :

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal(std::string animal); 
		WrongAnimal & operator=(WrongAnimal const & rhs);
		std::string	getType() const;
		void	setType(std::string type);

		virtual ~WrongAnimal(void);

		virtual void	makeSound(void) const;

	protected : 

		std::string _type;
};

#endif
