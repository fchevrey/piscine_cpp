/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 11:28:43 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/27 20:20:22 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include "eval_expr.hpp"

#include <string>
#include <sstream>

char		reverse_par(char par)
{
	if (par == '(')
		return(')');
	if (par == ')')
		return('(');
	return (' ');
}

bool			brackeys(std::string str, int *i, char car)
{
	char	car2;

	while (str[*i])
	{
		if (str[*i] == ')')
		{
			if (str[*i] == reverse_par(car))
				return (true);
			return (false);
		}

		if (str[*i] == '(')
		{
			car2 = str[*i];
			*i = *i + 1;
			if (brackeys(str, i , car2) == 0)
				return (false);
		}
		*i = *i + 1;
	}
	if (car == ' ')
		return (true);
	return (false);
}

bool		check_input(std::string src)
{
	size_t				i = 0;
	size_t				end = 0;
	std::stringstream	ss(src);
	std::string			tmp;
	std::string			sub;
	bool				number = true;
	bool				answer;

	while (!ss.eof())
	{
		i = 0;
		ss >> tmp;
		if (tmp.empty())
			return true;
		while (i < tmp.length() && (tmp[i] == '(' || tmp[i] == ')'))
		{
			i++;
		}
		end = i;
		while (end < tmp.length() && tmp[end] != ')')
		{
			end++;
		}
		sub = tmp.substr(i, end - i);
		if ((answer = is_number(sub)) != number)
		{
			return (false);
		}
		else if (!answer)
		{
			if (tmp.length() > 1)
			{
				std::cout << "false" << sub << std::endl;
				return false;
			}
		}
		number = !number;
	}
	return true;
}

bool	check_char(std::string src)
{
	size_t		i = 0;

	while (i < src.length())
	{
		if (!std::isdigit(src[i]) && src[i] != ' ' && src[i] != '-'
				&& src[i] != '+' && src[i] != '*' && src[i] != '/'
				&& src[i] != '(' && src[i] != ')' && src[i]!= '.')
			return false;
		if (src[i] == '(' || src[i] == ')')
		{
			if (src[i + 1] == reverse_par(src[i]))
				return (false);
		}
		i++;
	}
	return true;
}

bool	check_space(std::string src)
{
	size_t		i = 0;
	bool		space = false;

	while (i < src.length())
	{
		if (src[i] == ' ' && !space)
			return false;
		if (src[i] == ' ')
		{
			i++;
			space = false;
		}
		else
		{
			i++;
			space = true;
		}
	}
	return true;
}

int		ft_error(std::string log)
{
	std::cout << log << std::endl;
	return (0);
}

int main(int ac, const char *av[])
{
	int		i = 0;

	std::string		str;
	if (ac != 2)
		return (ft_error("usage : ./eval_expr \"arithmetic operation\""));
	str = av[1];
	if (str.empty())
		return (ft_error("empty input"));
	if (!brackeys(str, &i, ' '))
		return (ft_error("errors in brackets"));
	if (!check_char(str))
		return (ft_error("wrong number format"));
	if (!check_input(str))
		return (ft_error("wrong number format"));
	if (!check_space(str))
		return (ft_error("each number and operator must be separate by only one space"));
	Fixed		a;

	a = compute(str);
	std::cout << a << std::endl;
	return 0;
}
