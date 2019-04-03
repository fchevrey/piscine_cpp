/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:30:32 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 14:35:29 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeError::OfficeError(std::string reason) throw() : std::exception()
{
	this->_reason = reason;
}
OfficeBlock::OfficeError::~OfficeError() throw()
{
}
const char* OfficeBlock::OfficeError::what() const throw()
{
	return (this->_reason.c_str());
}
OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor) : _intern(intern), _signer(signer), _executor(executor)
{
}

OfficeBlock::~OfficeBlock()
{
}

void OfficeBlock::doBureaucracy(std::string form_name, std::string target)
{
	Form		*form;

	if (!this->_intern)
		throw OfficeBlock::OfficeError("No intern to create form");
	if (!this->_signer)
		throw OfficeBlock::OfficeError("No bureaucrat to sign form");
	if (!this->_executor)
		throw OfficeBlock::OfficeError("No bureaucrat to execute form");
	form = this->_intern->makeForm(form_name, target);

	this->_signer->signForm(*form);
	this->_executor->executeForm(*form);
	delete form;
}

void OfficeBlock::setIntern(Intern *intern)
{
	this->_intern = intern;
}

void OfficeBlock::setSigner(Bureaucrat *signer)
{
	this->_signer = signer;
}

void OfficeBlock::setExecutor(Bureaucrat *executor)
{
	this->_executor = executor;
}

OfficeBlock::OfficeBlock(const OfficeBlock &src)
{
	*this = src;
}

OfficeBlock & OfficeBlock::operator=(const OfficeBlock &rhs)
{
	this->_intern = rhs._intern;
	this->_signer = rhs._signer;
	this->_executor = rhs._executor;
	return *this;
}
