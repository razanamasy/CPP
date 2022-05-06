
#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain( std::string level )
{
	int y = 0;
	for (unsigned int i = 0; i < level.length(); i++)
		level[i] = tolower(level[i]);
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	string levelComp[] = {"debug", "info", "warning", "error"};

	for (y = 0; y < 4; y++)
	{
		if (level == levelComp[y])
			break ;
	}

	switch (y)
	{
		case 4 :
			cout << "Not a valid level " << endl;
			break ;
		default :
			for (int i = y; i < 4; i++)
				(this->*f[i])();
            break ;
	}
}

void Harl::debug( void )
{	
	cout << "[DEBUG]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do" << endl;
}

void Harl::info( void )
{
	cout << "[INFO]" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning( void )
{
	cout << "[WARNING]" << endl;
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error( void )
{
	cout << "[ERROR]" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}