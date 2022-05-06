#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

using std::string;
using std::endl;
using std::cout;
using std::cin;

class ClapTrap {
	public :
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string const name);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & rhs);
	
		void attack(const string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	const getName() const; 
		int	getHitPoint() const; 
		int	getEnergyPoint() const; 
		int getAttackDamage() const; 
		
		void	setName(std::string name);
		void	setHitPoint(int amount);
		void	setEnergyPoint(int amount); 
		void setAttackDamage(int amount);

	private :
		std::string  _name;
		int	_hitPoint;
		int	_energyPoint;
		int	_attackDamage;
};

#endif
