/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 19:28:46 by fchevrey          #+#    #+#             */
/*   Updated: 2018/06/10 19:53:20 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Agenda.class.hpp"
#include <iostream>

bool CheckResult(std::string *input, Agenda *agenda) 
{
	if (!input->compare("ADD"))
	{
		if (!agenda->Add())
		{
			std::cout << "Phonebook full" << std::endl;
		}
	}
	else if (!input->compare("SEARCH"))
	{
		agenda->Display();
	}
	else if (!input->compare("EXIT"))
	{
		return true;
	}
	else
	{
		std::cout << "invalid command"<< std::endl;
	}
	return false;
}

int		main(void)
{
	//Contact		book[8];
	Agenda			agenda;
	std::string		input;
	bool			finish = false;


	std::cout << "PhoneBook is actualy empty, please add a contact" << std::endl;
	//std::cout << "command disponible are ADD, SEARCH and EXIT" << std::endl;
	while (!finish)
	{
		std::cout << "command disponible are ADD, SEARCH and EXIT" << std::endl;
		std::cin >> input;
		//getline(cin, input);
		//finish = CheckResult(&input);
		finish = CheckResult(&input, &agenda);
	}
	return (0);
}
