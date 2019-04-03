/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 11:47:12 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 13:27:40 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdlib.h>
#include <sstream>
const int	Bureaucrat::_lowest_grade = 150;
const int	Bureaucrat::_highest_grade = 1;

Bureaucrat::GradeTooHightException::GradeTooHightException() throw() : std::exception()
{
}
Bureaucrat::GradeTooHightException::~GradeTooHightException() throw()
{
}
const char* Bureaucrat::GradeTooHightException::what() const throw()
{
	return ("Grade cannot exceed 1");
}
Bureaucrat::GradeTooLowException::GradeTooLowException() throw() : std::exception()
{
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	std::stringstream	 ss;
	std::string			str;

	ss << "Grade cannote be inferior to " << Bureaucrat::_lowest_grade;
	str = ss.str(); //cannot directly return ss.str().c_str()
	return (str.c_str());
}

Bureaucrat::Bureaucrat(void) : _name ("Mr. Nobody")
{
	this->_grade = Bureaucrat::_lowest_grade;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > Bureaucrat::_lowest_grade)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < Bureaucrat::_highest_grade)
		throw Bureaucrat::GradeTooHightException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName())
{
	this->_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::Promote(void)
{
	if (this->_grade <= Bureaucrat::_highest_grade)
		throw Bureaucrat::GradeTooHightException();
	else
		this->_grade--;
}

void Bureaucrat::Demote(void)
{
	if (this->_grade >= Bureaucrat::_lowest_grade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.getGrade();
	return *this;
}
std::ostream	&	operator<<(std::ostream &os, const Bureaucrat & rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}