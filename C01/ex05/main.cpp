
#include "Harl.hpp"

int main()
{
	Harl Harl;
	string	complainAsk;

	Harl.complain("debug");
	cout << endl;
	Harl.complain("INFO");
	cout << endl;
	Harl.complain("warning");
	cout << endl;
	Harl.complain("ERROR");
	return (0);
}
