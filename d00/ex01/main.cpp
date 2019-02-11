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
#include <iostream>

bool CheckResult(std::string *input) 
{
	if (input->compare("ADD"))
	{

	}
	else if (input->compare("SEARCH"))
	{

	}
	else if (input->compare("EXIT"))
	{
		return true;
	}
	return false;
}

int		main(void)
{
	Contact		book[8];
	std::string		input;
	bool			finish = false;


	std::cout << "PhoneBook is actualy empty, please add a contact" << std::endl;
	//std::cout << "command disponible are ADD, SEARCH and EXIT" << std::endl;
	while (!finish)
	{
		std::cout << "command disponible are ADD, SEARCH and EXIT" << std::endl;
		std::cin >> input;
		//getline(cin, input);
		finish = CheckResult(&input);
	}
	return (0);
}
