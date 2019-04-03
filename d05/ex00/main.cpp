/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:19:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 13:29:34 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <ostream>

int main(void)
{
	Bureaucrat		roger("Roger", 150);
	std::cout <<  roger << std::endl;
	try
	{
		roger.Demote();
	}
	catch (std::exception const &e)
	{
		std::cout << "e : "<< e.what() << std::endl;
	}
	std::cout <<  roger << std::endl;
	Bureaucrat		roberta("Roberta", 1);
	try 
	{
		Bureaucrat		donna("donna", 160);
	}
	catch (Bureaucrat::GradeTooLowException const &e)
	{
		std::cout << "low e : " << e.what() << std::endl;
	}
	std::cout << roberta << std::endl;
	try 
	{
		roberta.Promote();
	}
	catch (Bureaucrat::GradeTooHightException const &e)
	{
		std::cout << "hight e : " << e.what() << std::endl;
	}
	std::cout << roberta << std::endl;
	try 
	{
		roberta.Promote();
	}
	catch (std::exception const &e)
	{
		std::cout << " e : " << e.what() << std::endl;
	}
	std::cout << roberta << std::endl;
	try
	{
		roberta.Promote();
	}
	catch (std::exception const &e)
	{
		std::cout << "e : "<< e.what() << std::endl;
	}
	return 0;
}
