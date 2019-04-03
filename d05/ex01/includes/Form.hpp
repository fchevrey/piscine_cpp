/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:33:49 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 16:36:25 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Form
{
	public :
		struct GradeTooHightException : public std::exception
		{
			public :
				GradeTooHightException(std::string reason) throw();
				virtual ~GradeTooHightException() throw();
				virtual const char* what() const throw();
			protected :
				std::string		_reason;
		};
		struct GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException(std::string reason) throw();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
			protected :
				std::string		_reason;
		};
		Form(const std::string name);
		Form(const std::string name, const int grade_to_sign, const int grade_to_ex);
		Form(const Form & src);
		virtual		~Form();
		Form &	operator=(const Form & rhs);

		void			beSigned(const Bureaucrat &signatory);
		std::string		getName(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExe(void) const;
		bool			getSigned(void) const;
	private :
		Form(void);
		const std::string		_name;
		const int				_ex_grade;
		const int				_si_grade;
		bool					_signed;
};
std::ostream		&operator<<(std::ostream &os, const Form &rhs);


#endif
