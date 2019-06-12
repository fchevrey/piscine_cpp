/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:32:14 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/05 18:33:38 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>


int main()
{
	std::vector<int>		vec(100, 0);
	std::vector<int>		vec2(1000000, 0);

	vec[92] = 55;
	vec2[92] = 55;
	vec2[99999] = 27;
	int k = easyfind(vec, 55);
	std::cout << "k = " << k << std::endl;
	k = easyfind(vec2, 27);
	std::cout << "k = " << k << std::endl;
	try 
	{
		k = easyfind(vec2, 33);
		std::cout << "k = " << k << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "e: " << "33 not find in vec2" << std::endl;
	}
	return 0;
}
