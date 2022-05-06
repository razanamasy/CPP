#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public : 

		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		int	getRawBits(void) const;
		void	setRawBits(int	const raw);

		Fixed & operator=(Fixed const & rhs);

	private :
		int	c;
		static int const fracPart = 8;
};

#endif