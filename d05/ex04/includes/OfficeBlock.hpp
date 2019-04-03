/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:44:04 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 14:05:43 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP
# include "Intern.hpp"

class OfficeBlock
{
	public :
		struct OfficeError : public std::exception
		{
			public :
				OfficeError(std::string  reason)throw();
				virtual ~OfficeError() throw();
				virtual const char* what() const throw();
			private :
				std::string _reason;
		};
		OfficeBlock(Intern *intern = NULL, Bureaucrat *signer = NULL,
				Bureaucrat  *executor = NULL);
		virtual		~OfficeBlock();

		void		doBureaucracy(std::string form_name, std::string target);
		void		setIntern(Intern *intern);
		void		setSigner(Bureaucrat *signer);
		void		setExecutor(Bureaucrat *executor);
	private :
		OfficeBlock(const OfficeBlock & src);
		OfficeBlock &	operator=(const OfficeBlock & rhs);
		Intern			*_intern;
		Bureaucrat		*_signer;
		Bureaucrat		*_executor;
};

#endif
