/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:25:59 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 18:39:04 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):
	Form("PresidentialPardonForm", src.getGradeToSign(), src.getGradeToExe())
{
	this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::realy_execute(void)
{
	std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "";
}
