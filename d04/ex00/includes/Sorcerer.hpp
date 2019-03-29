/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:47:17 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 13:25:08 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public :
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer();

		void		Introduce(void) const;
		std::string		GetName(void) const;
		std::string		GetTitle(void) const;
		void			polymorph(Victim const &) const;

		Sorcerer &	operator=(Sorcerer const & rhs);
	private :
		std::string			_name;
		std::string			_title;
		Sorcerer(void);
};
std::ostream	&operator << (std::ostream &os, const Sorcerer &rhs);

#endif
