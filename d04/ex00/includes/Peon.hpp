/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:47:34 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 12:05:36 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
	public :
		Peon(std::string name);
		Peon(Peon const & src);
		virtual ~Peon(void);
		
		virtual void		getPolymorphed(void) const;
		Peon &	operator=(Peon const & rhs);
	private :
		Peon(void);
};

#endif
