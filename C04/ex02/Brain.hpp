#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain(void);
		Brain(Brain const & src);
		Brain(std::string oneIdea);
		~Brain(void);

		Brain & operator=(Brain const & rhs);

		void	setIdea(std::string idea);
		std::string getIdea(int nIdea) const;
		void	initBrain(std::string oneIdea);
	private :
		std::string _ideas[100];
};

#endif
