/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:51:53 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 17:30:29 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHightException::GradeTooHightException(std::string reason) throw() : std::exception()
{
	this->_reason = reason;
}
Form::GradeTooHightException::~GradeTooHightException() throw()
{
}
const char* Form::GradeTooHightException::what() const throw()
{
	return (this->_reason.c_str());
}
Form::GradeTooLowException::GradeTooLowException(std::string reason) throw() : std::exception()
{
	this->_reason = reason;
}
Form::GradeTooLowException::~GradeTooLowException() throw()
{
}
const char* Form::GradeTooLowException::what() const throw()
{
	return (this->_reason.c_str());
}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_ex) : _name(name), _ex_grade(grade_to_ex), _si_grade(grade_to_sign)
{
	if (grade_to_sign > Bureaucrat::lowest_grade || grade_to_ex > Bureaucrat::lowest_grade )
		throw Form::GradeTooLowException("ERROR Form constructor : Grade too Low");
	else if (grade_to_sign < Bureaucrat::highest_grade || grade_to_ex < Bureaucrat::highest_grade)
		throw Form::GradeTooHightException("ERROR Form constructor : Grade to Hight");
	this->_signed = false;
}

Form::Form(const std::string name) : _name(name), _ex_grade(150), _si_grade(150)
{
	this->_signed = false;
}

Form::Form(const Form &src) : _name(src.getName()), _ex_grade(src.getGradeToExe()), _si_grade(src.getGradeToSign())
{
	this->_signed = src.getSigned();
}

Form::~Form()
{
}

Form & Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	return *this;
}

void Form::beSigned(const Bureaucrat &signatory)
{
	if (signatory.getGrade() <= this->_si_grade)
		this->_signed = true;
	else 
		throw GradeTooLowException("Bureaucrat grade too low to sign form") ;
}

std::string Form::getName(void) const
{
	return this->_name;
}

int Form::getGradeToSign(void) const
{
	return this->_si_grade;
}

int Form::getGradeToExe(void) const
{
	return this->_ex_grade;
}

bool Form::getSigned(void) const
{
	return this->_signed;
}

Form::Form(void) : _name("Random Form"), _ex_grade(1), _si_grade(1)//private 
{
	this->_signed = false;
}

std::ostream		&operator << (std::ostream &os, const Form &form)
{
	std::string		sign("false");

	if (form.getSigned())
		sign = "true";
	os << "Form " << form.getName() << ", signed : " << sign
		<< ", grade need to sign : " << form.getGradeToSign()
		<< ", grade needed to execute : " << form.getGradeToExe();
	return os;
}
