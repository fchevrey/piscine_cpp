/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:17:08 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/31 20:57:06 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"
#include "Player.hpp"
#include "stdlib.h"

bool		ft_event(DataStruct &data, int c)
{
	if (c == 27 || c == 3 || c == 4)
	{
		return true;
	}
	if (c == KEY_SPACE)
		data.Add(new Weapon(Pt(1, 0) + data.player->getPos(), true));
	else
		data.player->doAction(c);
	return false;
}

void		GameLoop(DataStruct &data)
{
	int			updateDelay = 10;
	int			time = updateDelay;
	bool		quit = false;
	int			c;
	
	while (!quit)
	{
		c = wgetch(data.gameWin);
		time--;
		if (c != -1)
		{
			quit = ft_event(data, c);
		}
		if (time <= 0)
		{
			if (std::rand() % 5 == 1)
				data.Add(new Enemy());
			if (std::rand() % 13 == 1)
				data.Add(new Object());
			if (std::rand() % 100 == 98)
				data.Add(new Boss());
			data.Update();
			time = updateDelay;
			if (!quit)
				quit = data.is_finished();
		}
		data.Display();
	}
}

void		test()
{
	std::srand(std::time(0));
	DataStruct		data(Pt(GAME_WIDTH, GAME_HEIGHT), Pt(GAME_WIDTH, 4));
	refresh();
	data.Add(new Enemy());
	data.Add(new Enemy());
	data.Add(new Enemy());
	data.Add(new Object());
	data.Add(new Boss());
	GameLoop(data);
	endwin();
}

int main(void)
{
	test();
	return (0);
}
