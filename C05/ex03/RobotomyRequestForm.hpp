#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form{

	public :
		RobotomyRequestForm(); 
		RobotomyRequestForm(std::string target); 
		RobotomyRequestForm(RobotomyRequestForm const & src); 
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rs);
		virtual ~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif
