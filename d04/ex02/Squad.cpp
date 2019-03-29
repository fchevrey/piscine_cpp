/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:55:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 20:50:56 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>
#include <iostream>

list::list(ISpaceMarine *ptr)
{
	this->next = NULL;
	this->marine = ptr;
}
list::list(void)
{
	this->next = NULL;
	this->marine = NULL;
}

Squad::Squad(void)
{
	this->_army = NULL;
	this->_size = 0;
}
Squad::~Squad(void)
{
	this->DestroyArmy();
}

Squad::Squad(const Squad &src)
{
	this->_army = NULL;
	if (src.getCount() == 0)
	{
		this->_army = NULL;
		this->_size = 0;
		return ;
	}
	this->CopyArmy(src);
}
void		Squad::CopyArmy(const Squad &src)
{
	int max = src.getCount();
	DestroyArmy();
	for (int i = 0; i < max; i++)
	{
		this->push(src.getUnit(i));
	}
	this->_size = src.getCount();
}

int Squad::getCount() const
{
	return _size;
}

ISpaceMarine * Squad::getUnit(int index) const
{
	list	*lst = this->_army;

	if (index < 0 || index > this->_size)
		return NULL;
	for (int i = 0; i < index; i++)
		lst = lst->next;
	return lst->marine;
}

int Squad::push(ISpaceMarine *marine)
{
	list	*lst = _army;

	if (!lst)
	{
		_army = new list(marine->clone());
		this->_size++;
		return this->_size;
	}
	while (lst->next)
		lst = lst->next;
	lst->next = new list(marine->clone());
	this->_size++;
	return _size;

}
void		Squad::DestroyArmy(void)
{
	list	*lst = _army;
	list	*prev;

	if (!_army || lst == NULL)
		return ;
	while (lst->next)
	{
		prev = lst;
		lst = lst->next;
		delete prev->marine;
		prev->marine = NULL;
		prev->next = NULL;
		delete prev;
	}
	delete lst->marine;
	lst->marine = NULL;
	delete lst;
	_army = NULL;
	_size = 0;
}

Squad & Squad::operator=(const Squad &rhs)
{
	this->CopyArmy(rhs);
	return *this;
}
