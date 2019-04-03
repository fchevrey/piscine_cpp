/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:59:07 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/02 23:01:44 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <cstdlib>
#include <ctime>
#include "Data.hpp"
#include <iostream>

void		*serialized_test(void)
{
	char		*dt = new char[20];
	int		i = 0;
	while ( i < 8)
	{
		dt[i] = 'a'+ i;
		i++;
	}
	while (i < 12)
	{
		dt[i] = 127;
		i++;
	}
	while (i < 20)
	{
		dt[i] = 'A' + (char)(i - 12);
		i++;
	}
	return dt;
}
void		*serialized(void)
{
	char		*dt = new char[20];
	
	for (int j = 0; j < 20; j++)
	{
		dt[j] = static_cast<char>(rand() % 255);
	}
	return dt;
}

Data		*deserialized(void *raw)
{
	Data			*dst = new Data;
	char			*data;
	std::string		sub;

	data = reinterpret_cast<char *>(raw);
	sub = data;
	dst->s1 = sub.substr(0, 8);
	dst->n = *reinterpret_cast<const int*>(sub.substr(8, 4).c_str());
	dst->s2 = sub.substr(12, 8);
	return dst;
}

int		main(void)
{
	std::srand(std::time(0));
	void		*raw = serialized();
	void		*raw2 = serialized_test();
	Data		*dt = deserialized(raw);

	std::cout << "Raw1"<< std::endl; 
	std::cout << dt->s1 << std::endl;
	std::cout << dt->n << std::endl;
	std::cout << dt->s2 << std::endl;
	delete dt;
	Data	*dt2 = deserialized(raw2);
	std::cout << "Raw2"<< std::endl; 
	std::cout << dt2->s1 << std::endl;
	std::cout << dt2->n << std::endl;
	std::cout << dt2->s2 << std::endl;
	delete dt2;
	return 0;
}
