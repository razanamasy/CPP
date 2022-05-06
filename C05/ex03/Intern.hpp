#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Intern : public Bureaucrat{ 
    public :
		class ParamatreNotFound : public std::exception{
			public :
				virtual const char* what() const throw()
				{
					return ("You have to chose between : 'shrubbery creation', 'robotomy request' and 'presidential pardon'");
				}
		};
        Intern(void);
	    Intern(Intern const & src);
	    virtual ~Intern(void);
        Intern & operator=(Intern const & rs);
        Form * makeForm(std::string nameForm, std::string target) const;
};

#endif