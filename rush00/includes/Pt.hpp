/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pt.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:12:27 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 00:12:28 by ghippoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PT_HPP
# define PT_HPP

struct Pt
{
	public :
		Pt(void);
		Pt(int both);
		Pt(int x, int y);
		Pt(const Pt & src);
		virtual		~Pt(void);

		int		x;
		int		y;
		Pt &	operator=(const Pt & rhs);
		Pt		operator+(const Pt & rhs);
		Pt		operator-(const Pt & rhs);
		Pt		operator*(const Pt & rhs);
		Pt		operator/(const Pt & rhs);
		bool	operator==(const Pt &rhs);
		Pt		&operator++();
		Pt		operator++(int);
		Pt		&operator--();
		Pt		operator--(int);
};

#endif
