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

	private :
		int					_fixed;
		static const int	_bits;
};
std::ostream	&operator << (std::ostream &os, const Fixed &rhs);

#endif
