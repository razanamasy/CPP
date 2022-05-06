
#include "main.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}


void	Contact::displayField(int index) const{
	switch (index)
	{
		case (0):
			std::cout << "NAME :" << std::endl;
			break ;
		case (1):
			std::cout << "LAST NAME :" << std::endl;
			break ;
		case (2):
			std::cout << "NICK NAME :" << std::endl;
			break ;
		case (3):
			std::cout << "PHONE :" << std::endl;
			break ;
		case (4):
			std::cout << "INNER SECRET :" << std::endl;
			break ;
	}
}

void	Contact::getInfo(void) const {
	for (int i = 0; i < 5; i++)
	{
		Contact::displayField(i);
		std::cout << this->_info[i] << std::endl;
	}
}

void	Contact::getPreview(void) const {
	std::string str;

	std::cout << "|";

	for (int i = 0; i < 3; i++)
	{
		if ((this->_info[i]).length() <= 10)
		{
			str = this->_info[i];
			std::cout << std::setfill (' ') << std::setw (10);
			std::cout << this->_info[i];
		}
		else
			std::cout << (this->_info[i]).substr(0, 9) << ".";
		std::cout << "|";
	}
}

void	Contact::setContact(void) {

	for (int it = 0; it < 5; it++)
	{
		while (1)
		{
			this->displayField(it);
			if (!std::getline(std::cin, this->_info[it]))
				return ;
			if (std::cin.fail()  || std::cin.bad() )
				return ;
			else if (this->_info[it] != "\0")
				break ;
		}
	}
}