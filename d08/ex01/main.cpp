/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:55:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/04 18:48:40 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void)
{
	std::vector<int>			pouet(100000, 12);
	span		sp1(50);
	span		sp2(100000);

	for (int i = 0; i < 60; i++)
	{
		try
		{
			sp1.addNumber(i);
			if (i > 45)
				std::cout << "i = " << i<< std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "EXEPTION : i = "<< i << std::endl;
		}
	}
	pouet[10000] = 21;
	std::cout << "shortests = "<< sp1.shortestSpan() << std::endl;
	std::cout << "longests = "<< sp1.longestSpan() << std::endl;
	sp2.addNumber(pouet.begin(), pouet.end());
	std::cout << "shortests = "<< sp2.shortestSpan() << std::endl;
	std::cout << "longests = "<< sp2.longestSpan() << std::endl;
	span		sp3(sp2);
	std::cout << "shortests = "<< sp3.shortestSpan() << std::endl;
	std::cout << "longests = "<< sp3.longestSpan() << std::endl;
	span		sp4(1);
	sp4 = sp3;
	std::cout << "shortests = "<< sp3.shortestSpan() << std::endl;
	std::cout << "longests = "<< sp3.longestSpan() << std::endl;
	return 0;
}
