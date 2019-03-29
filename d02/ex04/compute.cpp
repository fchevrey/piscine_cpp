/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 13:15:44 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 22:01:56 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.hpp"
#include <string>
#include <sstream>

Fixed	calc(std::string src)
{
	std::stringstream	ss(src);
	std::string			op;
	std::string			word;

	ss >> word;
	Fixed dst((float)std::atof(&word[0]));
	while (!ss.eof())
	{
		ss >> op;
		ss >> word;
		dst = dst.calc(op[0] , Fixed((float)std::atof(&word[0])));
	}
	return (dst);
}

Fixed	calc2(std::string src)
{
	std::stringstream	ss;
	std::string			sub;
	std::string			op;
	std::string			word;
	Fixed				dst;
	size_t				begin;
	size_t				end;
	size_t				mul;
	size_t				div;

	div = src.find_last_of("/");
	mul = src.find_last_of("*");
	if (div == std::string::npos && mul == std::string::npos)
		return (calc(src));
	begin = mul - 2;
	if (mul == std::string::npos || (div > mul && div != std::string::npos))
		begin = div - 2;
	end = begin + 4;
	while (begin > 0 && (std::isdigit(src[begin]) || src[begin] == '.'))
		begin--;
	//begin--;
	while (end < src.length() && (std::isdigit(src[end]) || src[end] == '.'))
		end++;
//	end--;//pour rester sur le difit et pas l'espace
	sub = src.substr(begin, end);
	ss << calc(sub);
	src.replace(begin, (end - begin) + 2, ss.str());
	return calc2(src);
}

Fixed	compute(std::string src)
{
	std::stringstream	ss;
	std::string			sub;
	size_t				begin = 0;
	size_t				end = 0;
	Fixed				result;

	end = src.find_last_of(")");
	if (end == std::string::npos)
	{
		return (calc2(src));
	}
	begin = src.substr(0, end).find_last_of("(");
	end = src.find(")", begin);
	sub = src.substr(begin + 1, end - begin - 1);
	result = calc2(sub);
	ss << result;
	src.replace(begin, (end - begin) + 1, ss.str());
	return (compute(src));
}

