/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataStruct.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:21:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/31 20:52:30 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataStruct.hpp"
#include <iostream>

DataStruct::DataStruct(Pt sizegame, Pt sizescore)
{
	initscr();
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_WHITE, COLOR_RED);
	
	this->gameWin = newwin(sizegame.y, sizegame.x, 0, 0);
	this->gameWinSize = sizegame;
	this->_entities = NULL;

	this->scoreWin = newwin(sizescore.y, sizescore.x, sizegame.y, 0);
	this->scoreWinSize = sizescore;
	this->player = new Player();
	raw();
	noecho();
	nodelay(scoreWin, true);
	nodelay(gameWin, true);
	keypad(scoreWin, true);
	keypad(gameWin, true);
	wtimeout(gameWin, 10);
	curs_set(0);
	int g = (int)'g';
	int h = (int)'h';
	wborder(this->scoreWin, g, g, h, h, h, h, h,h);//all int character
	box(this->gameWin, 0, 0);
	move(0, 0);
}

void		DataStruct::AddEnemies(int nb)
{
	while (nb <= 0)
	{
		this->Add(new Enemy());
		nb--;
	}
}

void		DataStruct::Erase(void)
{
	List			*lst = this->_entities;
	Pt				pos;
	AGameEntity		*obj;

	if (!this->_entities)
		return;
	while (lst)
	{
		if (lst->content)
		{
			obj = lst->content;
			pos = obj->getPos();
			if (pos.x <= 0 || pos.x >= GAME_WIDTH || obj->getNbLife() <= 0)
			{
				lst = this->_entities;
				if (this->_entities->Remove(obj))
					continue;
			}
		}
		lst = lst->next;
	}

}

void		DataStruct::Add(AGameEntity *entity)
{
	if (!this->_entities)
		this->_entities = new List(entity);
	else
		this->_entities->Add(entity);
}

void		DataStruct::DisplaySprite(const AGameEntity *entity) const
{
	if (entity)
	{
		wattron(this->gameWin,COLOR_PAIR(entity->getColor()));
		this->DisplaySprite(entity->getPos(), entity->getSprite());
		wattroff(this->gameWin,COLOR_PAIR(entity->getColor()));
	}

}

void		DataStruct::DisplaySprite(const Pt & pos, int sprite) const
{
	mvwprintw(this->gameWin, pos.y, pos.x, "%c", sprite);
}

void		DataStruct::Update(void)
{
	List			*tmp  = this->_entities;
	AGameEntity		*obj;

	if (!this->_entities)
		return ;
	while (tmp)
	{
		if (tmp->content)
		{
			obj = tmp->content;
			obj->Update();
			if (obj->getType() == ENEMY && ((Enemy*)obj)->TryShoot())
				this->Add(new Weapon(obj->getPos()));
		}
		tmp = tmp->next;
	}
	this->checkPlayerCollision();
	this->checkCollisions();
	this->Erase();
}

void		DataStruct::Display(void) const
{
	List	*tmp  = this->_entities;

	wgetch(this->scoreWin);
	wclear(this->gameWin);
	wclear(this->scoreWin);
	int g = (int)'g';
	int h = (int)'h';
	wborder(this->scoreWin, g, g, h, h, h, h, h,h);
	box(this->gameWin, 0, 0);
	
	wattron(this->gameWin,COLOR_PAIR(this->player->getColor()));
	this->DisplaySprite(this->player);
	wattroff(this->gameWin,COLOR_PAIR(this->player->getColor()));
	if (!this->_entities)
		return;
	while (tmp)
	{
		if (tmp->content)
		{
			DisplaySprite(tmp->content);
		}
		tmp = tmp->next;
	}

	this->DisplayGameInfo();
	wrefresh(this->gameWin);
	wrefresh(this->scoreWin);
}

bool		DataStruct::is_finished(void) const
{
	if (this->player->getNbLife() <= 0)
		return true;
	return false;
}

void		DataStruct::checkPlayerCollision(void)
{
	List			*lst  = this->_entities;
	AGameEntity		*obj = NULL;
	Pt				pos;

	if (!this->_entities)
		return ;
	pos = this->player->getPos();
	while (lst)
	{
		if (lst->content && lst->content->getPos() == pos)
		{
			obj = lst->content;
			if (this->player->Collide(obj) > 0)
			{
				lst = this->_entities;
				this->_entities->Remove(obj);
				continue;
			}
		}
		lst = lst->next;
	}
}
void		DataStruct::DisplayGameInfo(void) const{
	mvwprintw(this->scoreWin, 1, 2, "Life: %d", this->player->getNbLife());
	mvwprintw(this->scoreWin, 2, 2, "Score: %d", this->player->getScore());
}

void		DataStruct::checkCollisions(void)
{
	List			*lst  = this->_entities;
	List			*tmp = NULL;
	Pt				pos;
	AGameEntity		*obj = NULL;
	bool			restart;

	if (!this->_entities)
		return;
	while (lst)
	{
		restart = false;
		if (lst->content)
		{
			obj = lst->content;
			pos = obj->getPos();
			tmp = lst->next;
			while (tmp)
			{
				if (tmp->content && tmp->content->getPos() == pos)
				{
					obj->Collide(tmp->content);
				}
				tmp = tmp->next;
			}
		}
		if (!restart)
			lst = lst->next;
	}
}

DataStruct::~DataStruct(void)
{
	delwin(this->gameWin);
	delwin(this->scoreWin);
	delete this->_entities;
	delete player;

	cbreak();
	endwin();
}
