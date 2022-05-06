#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "----------------CLAP TEST-----------------"<< std::endl;
	ClapTrap Hina("Hina");
	ClapTrap Toutou;
	Hina.takeDamage(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	Hina.beRepaired(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	Hina.takeDamage(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	Hina.takeDamage(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	ClapTrap HinaBis(Hina);
	std::cout << "Hit point last : " << HinaBis.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << HinaBis.getEnergyPoint() << std::endl;
	Hina.beRepaired(9);
	std::cout << std::endl;
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.beRepaired(10);
	std::cout << "Hit point last : " << Toutou.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Toutou.getEnergyPoint() << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "----------------SCAV TEST-----------------"<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap Mina("Mina");
	ScavTrap Doudou;
	std::cout << std::endl;

	Mina.attack("ennemies");
	std::cout << "Energy point last : " << Mina.getEnergyPoint() << std::endl;
	std::cout << std::endl;

	Mina.takeDamage(9);
	std::cout << "Hit point last : " << Mina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Mina.getEnergyPoint() << std::endl;
	std::cout << std::endl;

	Mina.beRepaired(9);
	std::cout << "Hit point last : " << Mina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Mina.getEnergyPoint() << std::endl;
	std::cout << std::endl;

	ScavTrap MinaBis(Mina);
	std::cout << "Hit point last : " << MinaBis.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << MinaBis.getEnergyPoint() << std::endl;

	MinaBis.takeDamage(101);
	std::cout << "Hit point last : " << MinaBis.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << MinaBis.getEnergyPoint() << std::endl;
	std::cout << std::endl;

	Doudou.guardGate();
	MinaBis.guardGate();

	ScavTrap test2;

	test2 = MinaBis;
	std::cout << "Hit point last : " << test2.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << test2.getEnergyPoint() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "----------------FRAG TEST-----------------"<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap Nina("Nina");
	FragTrap Nounou;
	std::cout << std::endl;

	Nina.attack("ennemies");
	std::cout << std::endl;

	Nina.takeDamage(9);
	std::cout << "Hit point last : " << Nina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Nina.getEnergyPoint() << std::endl;
	std::cout << std::endl;

	Nina.beRepaired(9);
	std::cout << "Hit point last : " << Nina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Nina.getEnergyPoint() << std::endl;
	std::cout << std::endl;

	FragTrap NinaBis(Nina);
	std::cout << "Hit point last : " << NinaBis.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << NinaBis.getEnergyPoint() << std::endl;

	NinaBis.takeDamage(101);
	std::cout << "Hit point last : " << NinaBis.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << NinaBis.getEnergyPoint() << std::endl;
	std::cout << std::endl;
	
	NinaBis.takeDamage(101);

	NinaBis.highFivesGuys();
	Nounou.highFivesGuys();
	std::cout << std::endl;

	FragTrap test3;

	test3 = NinaBis;
	std::cout << "Hit point last : " << NinaBis.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << NinaBis.getEnergyPoint() << std::endl;
	std::cout << std::endl;

	return (0);
}
