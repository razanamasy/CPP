#include "main.hpp"

PhoneBook::PhoneBook(void) : _nbContact(0), _indexContact(0){
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}

void	PhoneBook::search(void) const{

	std::string	str;
	int	nb = 0;

	std::cout << "     index|      name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->_nbContact; i++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << i + 1;
		this->_contact[i].getPreview();
		std::cout << std::endl;
	}
	if (this->_nbContact == 0)
	{
		std::cout << "You have no friends yet :/" << std::endl;
		return ;
	}
	std::cout << "Choose the contact from 1 to " << this->_nbContact << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, str))
			return ;
		if (std::cin.fail()  || std::cin.bad() )
			return ;
		if (std::isdigit(str[0]))
		{
			nb = (int)((int)str[0] - 48);
			if ((nb > 0 && nb <= this->_nbContact) && (str.length() == 1))
				break ;
		}
		std::cout << "I SAID from 1 to " << this->_nbContact << std::endl;
	}
	(this->_contact[nb - 1]).getInfo();
	return ;
}

void	PhoneBook::add(void){

	if (this->_indexContact == 8)
		this->_indexContact = 0;
	(this->_contact[this->_indexContact]).setContact();
	this->_indexContact++;
	if (this->_nbContact != 8)
		this->_nbContact++;
	return ;
}

