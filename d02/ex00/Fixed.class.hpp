#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
	public :
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);

		Fixed &	operator=(Fixed const & rhs);
	private :
		int					_fixed;
		static const int	fract = 8;
};

#endif
