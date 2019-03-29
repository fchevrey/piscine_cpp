/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:37:11 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 19:48:23 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad
{
	public :
		virtual ~ISquad(void){}
		virtual int				getCount() const = 0;
		virtual ISpaceMarine		*getUnit(int) const = 0;
		virtual int				push(ISpaceMarine*) = 0;
};

#endif
