/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 09:31:20 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/27 09:31:22 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
