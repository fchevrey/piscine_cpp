/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:48:13 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 19:37:20 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
#include "ISquad.hpp"

struct list
{
	public :
	list(void);
	list(ISpaceMarine *marine);
	ISpaceMarine	*marine;
	list			*next;

};

class Squad : public ISquad
{
	public :
		Squad(void);
		Squad(const Squad & src);
		virtual		~Squad(void);

		virtual int				getCount() const;
		virtual ISpaceMarine		*getUnit(int) const;
		virtual int				push(ISpaceMarine*);
		Squad &	operator=(const Squad & rhs);
	protected :
		void		DestroyArmy(void);
		void		CopyArmy(const Squad & rhs);
		int				_size;
		list			*_army;
//		ISpaceMarine	**_army;
};

#endif
