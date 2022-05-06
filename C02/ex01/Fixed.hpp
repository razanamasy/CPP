#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>


class Fixed {

	public : 

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const c);
		Fixed(float const c);
		~Fixed(void);
		float toFloat( void ) const;
		int toInt( void ) const;

		int	getRawBits( void ) const;
		void	setRawBits(int	const raw);

		Fixed & operator=(Fixed const & rhs);

	private :
		int	rawFix;
		static int const fracPart = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & toDisplay);

#endif