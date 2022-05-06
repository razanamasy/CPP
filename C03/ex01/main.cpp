#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	ClapTrap test;

	test = Toutou;
	std::cout << "Hit point last : " << test.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << test.getEnergyPoint() << std::endl;
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

	MinaBis.guardGate();

	ScavTrap test2;

	test2 = MinaBis;
	std::cout << "Hit point last : " << test2.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << test2.getEnergyPoint() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}
