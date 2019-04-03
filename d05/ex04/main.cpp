/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:19:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 15:07:32 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <ostream>

int main(void)
{
	Bureaucrat		*vogon = new Bureaucrat("Vogon", 149);
	Bureaucrat		*vogon2 = new Bureaucrat("chef Vogon", 45);
	Bureaucrat		*vogon3 = new Bureaucrat("grand chef Vogon", 5);
	Intern			nooby;
	OfficeBlock		block(&nooby, vogon2, vogon3);

	std::cout << "-- FALSE REQUEST --" << std::endl;
	try
	{
		block.doBureaucracy("request", "John");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	std::cout << std::endl <<"--  REQUESTS --" << std::endl;
	try
	{
		block.doBureaucracy("robotomy request", "John");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	try
	{
		block.doBureaucracy("presidential request", "H2G2");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	try
	{
		block.doBureaucracy("shrubberry request", "Terra");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	OfficeBlock		block2;
	std::cout << std::endl <<"-- no intern in block  --" << std::endl;
	try
	{
		block2.doBureaucracy("robotomy request", "John");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	block2.setIntern(&nooby);
	std::cout << std::endl <<"-- no signer in block  --" << std::endl;
	try
	{
		block2.doBureaucracy("robotomy request", "John");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	block2.setSigner(vogon);
	std::cout << std::endl <<"-- no executor in block  --" << std::endl;
	try
	{
		block2.doBureaucracy("robotomy request", "John");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	block2.setExecutor(vogon2);
	std::cout << std::endl <<"-- signer low lvl  --" << std::endl;
	try
	{
		block2.doBureaucracy("robotomy request", "John");
	}
	catch (const std::exception &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	delete vogon;
	delete vogon2;
	delete vogon3;
	return 0;
}
