/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:19:56 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 21:03:48 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	this->_success = false;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	Form("RobotomyRequestForm", src.getGradeToSign(), src.getGradeToExe())
{
	this->_target = src._target;
	this->_success = src._success;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_target = rhs._target;
	this->_success = rhs._success;
	return *this;
}

void RobotomyRequestForm::realy_execute(void)
{
	std::cout << " * TATATATATATAT * ";
	if (this->_success)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "Procedure failed" << std::endl;
	this->_success = !this->_success;
}

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = "";
	this->_success = false;
}
