#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T> {

	public :
			typedef typename std::stack<T>::container_type::iterator iterator;
			typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
			MutantStack() {}
			virtual ~MutantStack() {}
			MutantStack(MutantStack const & src) {
				*this = src;
			}
			MutantStack const & operator=(MutantStack const & rs) {
			
				this->c = rs.c; 
				return (*this);
			}
					iterator	begin() {
				return (this->c.begin());
			}
			iterator	end() {
				return (this->c.end());
			}
			reverse_iterator	rbegin() {
				return (this->c.rbegin());
			}
			reverse_iterator	rend() {
				return (this->c.rend());
			}
};

#endif
