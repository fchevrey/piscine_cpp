/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 21:33:49 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 12:27:34 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Intern::fun			 Intern::_makes[INTERN_MAKE_MAX] =
{
		&Intern::makeRobot,
		&Intern::makePres,
		&Intern::makeShru,
};
std::string				Intern::_names[INTERN_MAKE_MAX] =
{
		"robotomy request",
		"presidential request",
		"shrubberry request",
};

Intern::Intern(void)
{
}

Intern::Intern(const Intern &)//private
{
}

Intern::~Intern()
{
}

Form * Intern::makeForm(std::string formName, std::string target)
{
	int		i = 0;

	while (i < INTERN_MAKE_MAX)
	{
		if (!formName.compare(_names[i]))
		{
			std::cout << "Intern create " << formName << std::endl;
			return (this->*(Intern::_makes[i]))(target);
		}
		i++;
	}
	std::cout << "ERROR : form \"" << formName << "\" not found " << std::endl;
	return NULL;
}

Intern & Intern::operator=(const Intern &)
{
	return *this;
}

Form		* Intern::makePres(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form		* Intern::makeRobot(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form		* Intern::makeShru(std::string target)
{
	return new ShrubberyCreationForm(target);
}

