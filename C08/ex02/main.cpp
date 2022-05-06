#include "MutantStack.hpp"
#include <list>

int main()
{
	
	std::cout << "----- Test with List -----" << std::endl;
	std::list<int> _mstack;

	_mstack.push_back(5);
	_mstack.push_back(17);

	std::cout << _mstack.back() << std::endl;

	_mstack.pop_back();

	std::cout << _mstack.size() << std::endl;

	_mstack.push_back(3);
	_mstack.push_back(5);
	_mstack.push_back(737);
	_mstack.push_back(0);

	std::list<int>::iterator _it = _mstack.begin();
	std::list<int>::iterator _ite = _mstack.end();

	++_it;
	--_it;
	while (_it != _ite)
	{
		std::cout << *_it << std::endl;
		++_it;
	}
	std::cout << std::endl;

/*	std::list<int> _s(_mstack);
	for (std::list<int>::reverse_iterator rit=_s.rbegin(); rit!=_s.rend(); ++rit)
		std::cout << *rit << std::endl;*/


	std::cout << "----- Test with MutantStack -----" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	//This work but can't iterate on it because it's a stack
	std::stack<int> g(mstack);

/*	MutantStack<int> s(mstack);
	std::cout << std::endl;

	for (MutantStack<int>::reverse_iterator rit=s.rbegin(); rit!=s.rend(); ++rit)
		std::cout << *rit << std::endl;*/
	return (0);
}
