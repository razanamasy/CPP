#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


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

		bool operator<(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator>(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);

		static Fixed & max(Fixed & raw1, Fixed & raw2);
		static Fixed const & max(Fixed const & raw1, Fixed const & raw2);
		static Fixed & min(Fixed & raw1, Fixed & raw2);
		static Fixed const & min(Fixed const & raw1, Fixed const & raw2);

	private :
		int	rawFix;
		static int const fracPart = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & toDisplay);

#endif