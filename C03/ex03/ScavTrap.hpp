#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;
using std::endl;
using std::cout;
using std::cin;

class ScavTrap : public virtual ClapTrap{
	public :
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string const name);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack(const std::string& target);

		void	resetDefaultHitPoint();
		void	resetDefaultEnergyPoint();
		void	resetDefaultAttackDamage();

		void guardGate();
};

#endif
