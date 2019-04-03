/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:45:38 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 11:54:13 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "TypeClass.hpp"

int		ft_error(void)
{
	std::cout << "input error" << std::endl;
	return (0);
}

int			main(int argc, const char *argv[])
{
	std::string		src;
	char		c;
	int			i;
	float		f;
	double		d;

	if (argc != 2)
		return (ft_error());
	src = argv[1];
	if (src.empty())
		return (ft_error());
	TypeClass		type(src);
	std::cout << " -- main -- " << std::endl;
	if (type.getBaseType() == TYPE_ERROR)
		return (ft_error());
	std::cout << "base type = "<< type.getStrBaseType() << std::endl;
	std::cout << "double = ";
	try
	{
		d = type;
		std::cout << std::fixed << std::setprecision(6) << d  << std::endl;
	}
	catch (std::exception  &e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "float = ";
	try
	{
		f = type;
		std::cout << std::fixed <<std::setprecision(6) << f << "f" << std::endl;
	}
	catch (std::exception  &e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "int = ";
	try
	{
		i = type;
		std::cout << i << std::endl;
	}
	catch (std::exception  &e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "char = " ;
	try
	{
		c = type;
		if (c < ' ' || c > '~')
			std::cout << "not displayable" << std::endl;
		else
			std::cout << c << std::endl;
	}
	catch (std::exception  &e)
	{
		std::cout << "impossible" << std::endl;
	}
	return 0;
}
