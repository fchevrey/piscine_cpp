/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:47:24 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 11:21:59 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>

class Victim
{
	public :
		Victim(std::string name);
		Victim(Victim const & src);
		virtual ~Victim(void);

		std::string			GetName(void) const;
		virtual void		Introduce(void) const;
		virtual void		getPolymorphed(void) const;

		Victim &	operator=(Victim const & rhs);
	protected :
		std::string		_name;
		Victim(void);
};
std::ostream	&operator << (std::ostream &os, const Victim &rhs);


#endif
