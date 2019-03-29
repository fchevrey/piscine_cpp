/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 09:32:43 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/27 09:32:44 by fchevrey         ###   ########.fr       */
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

		Fixed			&operator=(Fixed const & rhs);

	private :
		int					_fixed;
		static const int	_bits;
};
std::ostream	&operator << (std::ostream &os, const Fixed &rhs);

#endif
