/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 11:26:29 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/01 13:27:47 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>
class Bureaucrat
{
	public :
		struct GradeTooHightException : public std::exception
		{
			public :
				GradeTooHightException() throw();
				virtual ~GradeTooHightException() throw();
				virtual const char* what() const throw();
		};
		struct GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException() throw();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		virtual		~Bureaucrat();

		const std::string		getName(void) const;
		int						getGrade(void) const;
		void					Promote(void);
		void					Demote(void);

		Bureaucrat &	operator=(const Bureaucrat & rhs);
	private :
		const std::string		_name;
		int						_grade;
		static const int		_lowest_grade;
		static const int		_highest_grade;
};
std::ostream	&	operator<<(std::ostream &os, const Bureaucrat & rhs);

#endif
