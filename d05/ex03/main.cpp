/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:19:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 12:26:56 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ostream>

void		sign(Bureaucrat *vogon, Form *form)
{
	try 
	{
		vogon->signForm(*form);
	}
	catch (std::exception const &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
}
bool		execute(Bureaucrat *vogon, Form *form)
{
	bool		exe = false;
	try 
	{
		exe = vogon->executeForm(*form);
	}
	catch (std::exception const &e)
	{
		std::cout << "e : " << e.what() << std::endl;
	}
	return exe;
}

void		test(Bureaucrat *vogon1, Bureaucrat *vogon2, Bureaucrat *vogon3, Form *form)
{
	Bureaucrat		*adm[3];
	adm[0] = vogon1;
	adm[1] = vogon2;
	adm[2] = vogon3;
	std::cout << std::endl <<" -- Form check -- " << std::endl;
	int i = 0;
	std::cout <<  *form << std::endl;
	while (!form->getSigned())
		sign(adm[i++], form);
	i = 0;
	while ( i < 3 && !execute(adm[i], form))
		i++;
}
void		unsignedcheck(Bureaucrat *vogon1, Bureaucrat *vogon2, Bureaucrat *vogon3, Form *form)
{
	Bureaucrat		*adm[3];
	int			i = 0;
	adm[0] = vogon1;
	adm[1] = vogon2;
	adm[2] = vogon3;

	while (i < 3 && !execute(adm[i], form))
		i++;
}

int main(void)
{
	Bureaucrat		*vogon = new Bureaucrat("Vogon", 149);
	Bureaucrat		*vogon2 = new Bureaucrat("chef Vogon", 45);
	Bureaucrat		*vogon3 = new Bureaucrat("grand chef Vogon", 5);
	Intern			nooby;
	Form			*presform;
	Form			*robotform;
	Form			*terra;

	robotform = nooby.makeForm("pouet request", "John");
	if (!robotform)
		robotform = nooby.makeForm("robotomy request", "John");
	presform = nooby.makeForm("presidential request", "H2G2");
	terra = nooby.makeForm("shrubberry request", "Terra");
	std::cout <<  *vogon << std::endl;
	std::cout <<  *vogon2 << std::endl;
	std::cout <<  *vogon3 << std::endl;
	std::cout << std::endl <<" -- Unsigned document check -- " << std::endl;
	unsignedcheck(vogon, vogon2, vogon3, presform);
	unsignedcheck(vogon, vogon2, vogon3, robotform);
	unsignedcheck(vogon, vogon2, vogon3, terra);
	test(vogon, vogon2, vogon3, presform);
	test(vogon, vogon2, vogon3, robotform);
	test(vogon, vogon2, vogon3, robotform);
	test(vogon, vogon2, vogon3, terra);
	delete presform;
	delete robotform;
	delete terra;
	delete vogon;
	delete vogon2;
	delete vogon3;
	return 0;
}
