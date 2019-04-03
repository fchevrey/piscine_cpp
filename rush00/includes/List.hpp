/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:02:55 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/31 12:27:05 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
# define LIST_HPP
# include "AGameEntity.hpp"

struct List
{
	List(void);
	List(AGameEntity *to_add);
	~List();
	bool		Add(AGameEntity *to_add);
	bool		Remove(AGameEntity *to_add);

	AGameEntity		*content;
	List			*next;
};

#endif
