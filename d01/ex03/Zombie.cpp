/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:21:43 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 20:23:13 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void)
{
	this->name = "none";
	this->type = "none";
}

Zombie::~Zombie(void)
{
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiins" << std::endl;
}
