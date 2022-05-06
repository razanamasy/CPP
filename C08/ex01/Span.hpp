#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream> 
#include <vector> 
class Span {

	public :
		class NoDistanceException : public std::exception {
			public :
				virtual const char* what() const throw() {

					return ("Can't find no distance");
				}
		};
		class MaxNumberReachException : public std::exception {
			public :
				virtual const char* what() const throw() {

					return ("Max number has been reached !");
				}
		};
		class RangeTooBigException : public std::exception {
			public :
				virtual const char* what() const throw() {

					return ("The range you want to insert is too big");
				}
		};
				Span(void);
				~Span(void);
				Span(unsigned int N);
				Span(Span const & src);
				Span const & operator=(Span const & rs);

				std::vector<int> getVector() const;
				unsigned int	getNMax() const;
				unsigned int	getNActual() const;
				void	addNumber(int nb);
				int	shortestSpan(); 
				int	longestSpan();

				template <typename T>
				void  insertSpan(T begin, T end) {
				//	std::cout << end - begin << std::endl;
				//	std::cout << this->_nMax - this->_nActual << std::endl;
					if (end - begin > this->_nMax - this->_nActual)
						throw (Span::RangeTooBigException());
					else
					{
						this->_myVector.insert (this->_myVector.begin(), begin, end);
						this->_nActual = end - begin;
					}
				}

		private :
			std::vector<int> _myVector;
			unsigned int	_nMax;
			unsigned int	_nActual;
};



#endif
