/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interne.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 21:11:13 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 14:08:14 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# define INTERN_MAKE_MAX  3

class Intern
{
	public :
		struct InternError : public std::exception
		{
			public :
				InternError(std::string  reason)throw();
				virtual ~InternError() throw();
				virtual const char* what() const throw();
			private :
				std::string _reason;
		};
		Intern(void);
		virtual		~Intern();
		Intern(const Intern & src);
		Intern &	operator=(const Intern & rhs);

		Form	*makeForm(std::string formName, std::string target);

	private :
	typedef Form			*(Intern::*fun)(std::string);
	Form					*makePres(std::string target);
	Form					*makeRobot(std::string target);
	Form					*makeShru(std::string target);
	static fun				_makes[INTERN_MAKE_MAX];
	static std::string		_names[INTERN_MAKE_MAX];
};

#endif
