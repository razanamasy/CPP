#include "Harl.hpp"

int main()
{
	Harl Harl;
	string	complainAsk;

	cout << "Hello Harl, chose your level between : debug info warning error" << endl;

	cin >> complainAsk;
	if (cin.bad() || cin.fail())
		return (1);
	Harl.complain(complainAsk);
	return (0);
}
