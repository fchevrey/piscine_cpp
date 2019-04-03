/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:27:52 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 18:07:11 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Array<int>				arr = Array<int>(10);
	Array<std::string>		str = Array<std::string>(3);
	int			k;

	for (unsigned int i = 0; i < arr.size();i++)
	{
		arr[i] = i;
	}
	for (unsigned int i = 0; i < arr.size();i++)
	{
		k = arr[i];
		std::cout << k << std::endl;
	}
	for (unsigned int i = 0; i < str.size();i++)
	{
		str[i] = "patatrac";
		std::cout << str[i] << std::endl;
	}
	try
	{
		std::string		str2 = str[str.size()];
		std::cout << str2 << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << "e :" << "outof range" << std::endl;
	}
	return 0;
}
