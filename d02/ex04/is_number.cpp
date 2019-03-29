/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 12:04:39 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/27 20:22:40 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	is_number(std::string src)
{
	std::string::const_iterator		i = src.begin();
	bool		dot = false;

	while (i != src.end())
	{
		if (i == src.begin() && (*i == '-' || *i == '+') && src.length() > 1)
		{
			++i;
			continue ;
		}
		if (*i == '.' && !dot)
			dot = true;
		else if (*i < '0' || *i > '9')
			return (false);
		++i;
	}
	return (true);
}

bool	is_number(char *src)
{
	int i = 0;

	if (!src)
		return false;
	while (src[i])
	{
		if (i == 0 && (src[i] == '-' || src[i] == '+') && src[1] != '\0')
		{
			++i;
			continue ;
		}
		if (src[i] < '0' || src[i] > '9')
			return (false);
		++i;
	}
	return (true);
}
