#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form{

	public :
		ShrubberyCreationForm(); 
		ShrubberyCreationForm(std::string target); 
		ShrubberyCreationForm(ShrubberyCreationForm const & src); 
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rs);
		virtual ~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif
