/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:13:34 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 18:27:37 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		virtual		~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(const ShrubberyCreationForm & rhs);
	protected :
		virtual void	realy_execute(void);
	private :
		ShrubberyCreationForm(void);
		std::string			_target;
};

#endif
