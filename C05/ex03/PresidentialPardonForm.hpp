#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form{

	public :
		PresidentialPardonForm(); 
		PresidentialPardonForm(std::string target); 
		PresidentialPardonForm(PresidentialPardonForm const & src); 
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rs);
		virtual ~PresidentialPardonForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif
