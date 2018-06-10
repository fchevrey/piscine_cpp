/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 17:06:21 by fchevrey          #+#    #+#             */
/*   Updated: 2018/06/10 17:40:56 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"
#include <iostream>

int		main(void)
{
	char		name[] = "fab";
	char		race[] = "human";
	char		clas[] = "mage";
	Player		me(name, race, clas, 1);

	std::cout << "name = " << me.getname() << " race = " << me.getrace() << std::endl;
	std::cout << "clas = " << me.getclas() << " lvl = " << me.getlvl() << std::endl;
	me.lvlup();
	std::cout << "lvl = " << me.getlvl() << std::endl;
	return (1);
}
