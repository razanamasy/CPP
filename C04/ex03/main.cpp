//#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

#include "Character.hpp"
#include <iostream>
#include <stdio.h>

int main()
{
	IMateriaSource* src1 = new MateriaSource();
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	AMateria * deep = NULL;
	std::cout << std::endl;
	std::cout << std::endl;
	//Copy test
	std::cout << "--------------DEEP ASSIGNATION CONSTRUCTOR TEST-------------" << std::endl;
	Character Hina;
	deep = src1->createMateria("cure");
	Hina.equip(deep);
	Character Lenny("Lenny");
	Lenny = Hina;
	std::cout << Hina.getName() << std::endl;
	std::cout << Lenny.getName() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	AMateria * left1;
	left1 = Lenny.collectLeftOvers(0);
	Lenny.unequip(0);
	deep = src1->createMateria("ice");
	Lenny.equip(deep);
	delete left1;
	std::cout << std::endl;
	std::cout << std::endl;

	Lenny.use(0, Hina);
	Hina.use(0, Lenny);
	std::cout << "--------------DEEP CPY CONSTRUCTOR TEST-------------" << std::endl;
	Character Ruby;
	deep = src1->createMateria("cure");
	Ruby.equip(deep);
	Character Leo(Ruby);
	std::cout << Ruby.getName() << std::endl;
	std::cout << Leo.getName() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	AMateria * left2;
	left2 = Leo.collectLeftOvers(0);
	Leo.unequip(0);
	deep = src1->createMateria("ice");
	Leo.equip(deep);
	delete left2;
	std::cout << std::endl;
	std::cout << std::endl;

	Leo.use(0, Hina);
	Ruby.use(0, Lenny);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "--------------SOURCE AND CHARACTER CREATION WITH THE INTERFACE CHARACTER-------------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());

	ICharacter* me = new Character("me");
	AMateria* tmp = NULL;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "--------------FILL THE (I)CHARACTER -------------" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;


	//Celui de trop à delete car rejeté par le Character et non utilisé par un autre charactère
	std::cout << "--------------(TOO MUCH) FILL THE(I)CHARACTER : WE NEED TO DELETE THE REJECTED MATERIA !-------------" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria * oldTmp = tmp;
	delete oldTmp;
	std::cout << std::endl;
	std::cout << std::endl;

	//Celui qui n'a pas été learn
	std::cout << "--------------TRY TO FILL WITH SOMETHING NOT LEARNED YET (NULL) !-------------" << std::endl;
	tmp = src->createMateria("cure");
	//Le materia NULL
	me->equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;

	//Enfin learn cure !
	std::cout << "--------------LEARN CURE-------------" << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	std::cout << std::endl;

	//Equip et unequip avec un Character-only 
	std::cout << "--------------EQUIP CHARACTER-ONLY TO UNEQUIP-------------" << std::endl;
	
	Character onlyChar("onlyChar");
	tmp = src->createMateria("ice");
	onlyChar.equip(tmp);
	tmp = src->createMateria("ice");
	onlyChar.equip(tmp);
	tmp = src->createMateria("ice");
	onlyChar.equip(tmp);
	tmp = src->createMateria("ice");
	onlyChar.equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "--------------UNEQUIP THE CHARACTER-ONLY WE HAVE TO SAVE THEM BEFORE TO DELETE LATER-------------" << std::endl;
	AMateria * leftOver1;
	leftOver1 = onlyChar.collectLeftOvers(0);
	onlyChar.unequip(0);
	AMateria * leftOver2;
	leftOver2 = onlyChar.collectLeftOvers(3);
	onlyChar.unequip(3); // clairement un raté
	AMateria * leftOver3;
	leftOver3 = onlyChar.collectLeftOvers(2);
	onlyChar.unequip(2);
	std::cout << std::endl;
	std::cout << std::endl;

	//Delete the leftOvers wich succeed
	std::cout << "--------------LET'S DELETE THE LEFTOVERS-------------" << std::endl;
	delete leftOver1;
	delete leftOver3;
	std::cout << std::endl;
	std::cout << std::endl;

	//Et rajouter 2 cure !
	std::cout << "--------------ADD 2 CURE-------------" << std::endl;
	tmp = src->createMateria("cure");
	onlyChar.equip(tmp);
	tmp = src->createMateria("cure");
	onlyChar.equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;

	//Celui qui va subir
	std::cout << "--------------BOB CREATION WE GON' ATTACK HIM-------------" << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	std::cout << std::endl;

	//Utilisation excessive des materia sur bob :(
	std::cout << "--------------LET'S ATTACK BOB-------------" << std::endl;
	onlyChar.use(0, *bob);
	onlyChar.use(1, *bob);
	onlyChar.use(2, *bob);
	onlyChar.use(3, *bob);
	me->use(0, *bob);
	me->use(3, *bob);
	std::cout << std::endl;
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	delete src1;
	return 0;
}
