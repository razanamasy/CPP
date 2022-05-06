#include "main.hpp"

int	main()
{
	std::string buff;
	PhoneBook myBook;

	std::cout << "type either : ADD, SEARCH or EXIT" << std::endl;
	while (std::getline(std::cin, buff))
	{
		if (std::cin.fail()  || std::cin.bad() )
			return (1);
		if (buff == "ADD")
			myBook.add();
		else if (buff == "SEARCH")
			myBook.search();
		else if (buff == "EXIT")
		{
			std::cout << "Byyye !" << std::endl;
			break ;
		}
		else
			std::cout << "Bad Option" << std::endl;
		std::cout << "type either : ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
