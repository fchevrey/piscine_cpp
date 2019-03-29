/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 10:46:41 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/27 15:52:13 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap(void)
{
	std::cout << "-- Heap Poney --" << std::endl;
	Poney *p = new Poney(14, true, "vanilla", "Heapy", true);

	p->Jump();
	p->Gambol();
	std::cout << p->GetName() << " has a biutiful " << p->GetColor() 
		<< " color" << std::endl;
	p->SetColor("chocolate");
	std::cout << p->GetName() << " has now a biutiful " << p->GetColor() 
		<< " color" << std::endl;
	delete p;
}

void	ponyOnTheStack(void)
{
	std::cout << "-- Stack Poney --" << std::endl;
	Poney	p;

	p.Jump();
	p.Gambol();
	std::cout << p.GetName() << " isn't a pretty name" << std::endl;
	p.SetName("wondefull");
	std::cout << p.GetName() << " is better" << std::endl;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
