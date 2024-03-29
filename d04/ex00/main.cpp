/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:23:41 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/30 20:44:30 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer	robert("Robert","the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << " -- derived test -- " << std::endl;
	Victim		*test = new Peon("Truc");
	robert.polymorph(*test);
	delete (test);
	std::cout << " -- destroy -- " << std::endl;
	return 0;
}
