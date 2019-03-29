/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 09:33:24 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/27 13:38:57 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Fixed		calc(char op, Fixed const &rhs) const;

		Fixed			&operator=(Fixed const & rhs);
		bool			operator<(Fixed const & rhs) const;
		bool			operator>(Fixed const & rhs) const ;
		bool			operator>=(Fixed const & rhs) const;
		bool			operator<=(Fixed const & rhs) const;
		bool			operator==(Fixed const & rhs) const;
		bool			operator!=(Fixed const & rhs) const;

		Fixed			operator+(Fixed const & rhs) const;
		Fixed			operator-(Fixed const & rhs) const;
		Fixed			operator*(Fixed const & rhs) const;
		Fixed			operator/(Fixed const & rhs) const;

		Fixed			&operator++();
		Fixed			operator++(int value);
		Fixed			&operator--();
		Fixed			operator--(int value);

		static Fixed	const &min(const Fixed &a, const Fixed &b);
		static Fixed	const &max(const Fixed &a, const Fixed &b);
		static Fixed	const calc(const Fixed &a, char op, const Fixed &b);

	private :
		int					_fixed;
		static const int	_bits;
		Fixed (Fixed::*_op_array[4])(Fixed const &) const;
		char				_op[4];
		void				_FillOpArray(void);
};
std::ostream	&operator << (std::ostream &os, const Fixed &rhs);

#endif
