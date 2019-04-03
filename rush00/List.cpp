/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:08:34 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/31 18:35:54 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "List.hpp"
#include <string>

List::List(void)
{
	this->content = NULL;
	this->next = NULL;
}


List::List(AGameEntity *to_add)
{
	this->content = to_add;
	this->next = NULL;
}

List::~List()
{
	if (this->next)
		delete next;
	this->next = NULL;
	if (this->content)
	{
		delete this->content;
		this->content = NULL;
	}
}

bool			List::Add(AGameEntity *to_add)
{
	List		*tmp = this;

	while (tmp->next)
		tmp = tmp->next;
	if ((tmp->next = new List(to_add)) == NULL)
		return false;
	return true;
}


bool			List::Remove(AGameEntity *item)
{
	List		*tmp = this;
	List		*prev = NULL;

	while (tmp)
	{
		if (tmp->content && tmp->content == item)
		{
			delete tmp->content;
			tmp->content = NULL;
			if (prev)
			{
				prev->next = tmp->next;
				tmp->next = NULL;
				delete tmp;
			}
			return true;
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return false;
}
