#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public :
		class GradeTooHighException : public std::exception{
			public :
				virtual const char* what() const throw()
				{
					return ("Form exception : The grade is too hight");
				}
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char* what() const throw()
				{
					return ("Form exception : The grade is too low");
				}
		};
		Form(void);
		Form(Form const & src);
		Form(std::string name, int gradeSi, int gradeEx);
		~Form(void);
		Form & operator=(Form const & rs);
	
		std::string getName() const;
		int getGradeSi() const;
		int getGradeEx() const;
		bool getSi() const;
		void	setSi(bool i);
		void	beSigned(Bureaucrat & signataire);
	private :
		std::string const _name;
		int	const _gradeSi;
		int	const _gradeEx;
		bool	_si;
};

std::ostream & operator<<(std::ostream & o, Form const & toDisplay);
#endif
