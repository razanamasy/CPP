#include <iostream>
#include <stdint.h>
#include "Data.hpp"
uintptr_t	serialize(t_data* ptr)
{
	uintptr_t  indexData;
	indexData = reinterpret_cast<uintptr_t >(ptr);
	return (indexData);
}

t_data* deserialize(uintptr_t raw)
{
	t_data * indexData;
	indexData = reinterpret_cast<t_data *>(raw);
	return (indexData);
}

int main()
{
	t_data data1;
	data1.part1 = 121;
	data1.part2 = 42;
	data1.part3 = 'r';

	std::cout << "-----VALEUR DANS UN PTR SUR DATA (AVANT SERIALISATION)-----" << std::endl;
	std::cout << &data1 << std::endl;
	std::cout << std::endl;

	std::cout << "-----VALEUR DANS UN UINTPTR (APRES SERIALIZATION)-----" << std::endl;
//Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t (ce truc prend la taille de data donc cool)
	uintptr_t indexData1 = serialize(&data1);
	std::cout << indexData1 << std::endl;
	std::cout << std::endl;

	std::cout << "-----RE PASSAGE DU UINTPTR AU POINTEUR SUR DATA (APRES DESERIALIZATION)-----" << std::endl;
	std::cout << "-----(AFFICHAGE PREMIER VALEUR POINTE DANS LA STRUCT)-----" << std::endl;
//Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
	t_data* indexData2 = deserialize(indexData1);
	std::cout << indexData2->part1 << std::endl;
	std::cout << indexData2 << std::endl;
	std::cout << std::endl;

	std::cout << "-----DERNIER PETIT TEST REINTERPRET EN INT POUR SE BALADER DANS LA STRUCUTRE-----" << std::endl;
	std::cout << "-----CAST EN INT ET INCREMENTATION ! (VALEUR AVANT ET APRES)-----" << std::endl;
//Last test to understand reinterpret :)
	int * intPtr = reinterpret_cast<int *>(indexData2);
	std::cout << *intPtr << std::endl;
	intPtr++;
	std::cout << *intPtr << std::endl;
	std::cout << std::endl;

	return (0);
}
