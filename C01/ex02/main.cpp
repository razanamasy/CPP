#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str = "HI THIS IS BRAIN";
	string* stringPTR = &str;
	string& stringREF = str;

	cout << "memory address of the string variable : " << &str << endl;
	cout << "memory address held by stringPTR : " << stringPTR << endl;
	cout << "memory address address held by stringREF : " << &stringREF << endl;

	cout << "Value of the string variable : " << str << endl;
	cout << "Value pointed to by stringPTR : " << *stringPTR << endl;
	cout << "Value pointed to by stringREF : " << stringREF << endl;
	return (0);
}
