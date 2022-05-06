#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;
using std::endl;
using std::cout;
using std::cin;

class FragTrap : public ClapTrap{
	public :
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string const name);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & rhs);

		void	attack(const std::string& target);

		void highFivesGuys(void);
};

#endif
