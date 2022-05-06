#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {
	public :
		class GradeTooHighException : public std::exception{
			public :
				virtual const char* what() const throw()
				{
					return ("Bureaucrat exception : The grade is too hight must be 1 and above");
				}
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char* what() const throw()
				{
					return ("Bureaucrat exception : The grade is too low must be 150 or less");
				}
		};
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat & operator=(Bureaucrat const & rs);

		void moreGrade();
		void lessGrade();
		std::string	getName() const;
		int	getGrade() const;
	private :
		std::string const _name;
		int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & toDisplay);
#endif
