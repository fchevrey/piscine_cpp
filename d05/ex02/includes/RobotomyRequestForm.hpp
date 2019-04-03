/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:57:34 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 18:41:20 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & src);
		virtual		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(const RobotomyRequestForm & rhs);
	protected :
		virtual void	realy_execute(void);
	private :
		RobotomyRequestForm(void);
		std::string			_target;
		bool				_success;
};

#endif
