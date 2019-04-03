/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 21:33:49 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 14:55:42 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* internError functions */
Intern::InternError::InternError(std::string  reason) throw() : std::exception()
{
	this->_reason = reason;
}
Intern::InternError::~InternError() throw()
{
}
const char* Intern::InternError::what() const throw()
{
	return (this->_reason.c_str());
}
/* intern static functions functions */
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
/* intern Canonical form functions */

Intern::Intern(void)
{
}

Intern::Intern(const Intern &)//private
{
}

Intern::~Intern()
{
}
Intern & Intern::operator=(const Intern &)
{
	return *this;
}
/* intern specifics functions */

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
	throw Intern::InternError("intern don't know \"" + formName + "\"");
	return NULL;
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

