/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:26:19 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 20:56:32 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
	Form("ShrubberyCreationForm", src.getGradeToSign(), src.getGradeToExe())
{
	this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->_target = rhs._target;
	return *this;
}

void ShrubberyCreationForm::realy_execute(void)
{
	std::ofstream	ofs;

	ofs.open(this->_target + "_shrubbery", std::fstream::out);
	if (!ofs || !ofs.is_open())
		return ;
	ofs << "       ###" << std::endl
		<< "      #o###" << std::endl
		<< "    #####o###"<< std::endl
		<< "   #o#\\#|#/###"<< std::endl
		<< "    ###\\|/#o#"<< std::endl
		<< "     # }|{  #"<< std::endl
		<< "       }|{"<< std::endl;
	ofs.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = "";
}
