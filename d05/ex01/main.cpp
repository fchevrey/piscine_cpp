/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:19:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 17:31:29 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <ostream>

int main(void)
{
	Form			form("AA12", 150, 2);
	Bureaucrat		roger("Roger", 149);
	std::cout <<  roger << std::endl;
	std::cout <<  form << std::endl;
	roger.signForm(form);
	std::cout <<  form << std::endl;
	Form			form2("B127", 30, 2);
	std::cout <<  form2 << std::endl;
	roger.signForm(form2);
	std::cout <<  form2 << std::endl;
	try 
	{
		Form			form3("don't work", -1, 2);
	}
	catch (std::exception const &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	try 
	{
		Form			form4("don't work", 1, -2);
	}
	catch (std::exception const &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	try 
	{
		Form			form5("don't work", 151, 1);
	}
	catch (std::exception const &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	try 
	{
		Form			form6("don't work", 140, 151);
	}
	catch (std::exception const &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	return 0;
}
