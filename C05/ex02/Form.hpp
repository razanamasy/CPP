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
					return ("Form exception : The Bureaucrat's grade is too hight");
				}
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char* what() const throw()
				{
					return ("Form exception : The Bureaucrat's grade is too low");
				}
		};
		class NotSignedYet : public std::exception{
			public :
				virtual const char* what() const throw()
				{
					return ("Form exception : Form not signed");
				}
		};

		Form(void);
		Form(Form const & src);
		Form(std::string name,  std::string target, int gradeSi, int gradeEx);
		virtual ~Form(void);
		Form & operator=(Form const & rs);
	
		std::string getName() const;
		std::string getTarget() const;
		int getGradeSi() const;
		int getGradeEx() const;
		bool getSi() const;

		void	setSi(bool i);
		void	setTarget(std::string target);
	
		void	beSigned(Bureaucrat & signataire);
		void	checkAndExec(Bureaucrat const & executor) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;
	private :
		std::string const _name;
		std::string _target;
		int	const _gradeSi;
		int	const _gradeEx;
		bool	_si;
};

std::ostream & operator<<(std::ostream & o, Form const & toDisplay);
#endif
