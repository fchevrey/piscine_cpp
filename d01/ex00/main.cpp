/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:16:12 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 17:36:15 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Poney.hpp"
#include <iostream>

void	HeapPoney(void)
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

void	StackPoney(void)
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
	HeapPoney();
	StackPoney();
}
