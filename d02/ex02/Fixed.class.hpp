#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(int value);
		Fixed(float value);
		Fixed(Fixed const & src);
		~Fixed(void);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;

		Fixed			&operator=(Fixed const & rhs);
		bool			operator<(Fixed const & rhs);
		bool			operator>(Fixed const & rhs);
		bool			operator>=(Fixed const & rhs);
		bool			operator<=(Fixed const & rhs);
		bool			operator==(Fixed const & rhs);
		bool			operator!=(Fixed const & rhs);

		Fixed			operator+(Fixed const & rhs);
		Fixed			operator-(Fixed const & rhs);
		Fixed			operator*(Fixed const & rhs);
		Fixed			operator/(Fixed const & rhs);

		Fixed			&operator++();
		Fixed			operator++(int value);
		Fixed			&operator--();
		Fixed			operator--(int value);
		
		static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(const Fixed &a, const Fixed &b);

	private :
		int					_fixed;
		static const int	_bits;
};
std::ostream	&operator << (std::ostream &os, const Fixed &rhs);

#endif
