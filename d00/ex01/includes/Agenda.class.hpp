/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 11:28:57 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 11:29:23 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
class Agenda
{
public:
	Agenda();
	~Agenda();

	void	 Display();
	void	 Display(int i);
	bool 	Add(void);
	bool 	Add(Contact toadd);
	int	GetLength(void);

private :
	int		_length;
	int		_capacity;
	Contact 	_contacts[8];
};

