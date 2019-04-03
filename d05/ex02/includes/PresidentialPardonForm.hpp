/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:14:30 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 18:27:27 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm :public Form
{
	public :
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & src);
		virtual		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(const PresidentialPardonForm & rhs);
	protected :
		virtual void	realy_execute(void);
	private :
		PresidentialPardonForm(void);
		std::string			_target;
};

#endif
