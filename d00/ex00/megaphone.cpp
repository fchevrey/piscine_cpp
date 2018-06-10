/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 18:20:01 by fchevrey          #+#    #+#             */
/*   Updated: 2018/06/10 18:52:30 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*strupper(char *src)
{
	int		i;

	i = -1;
	while (src[++i])
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] -= 32;
	return (src);
}

int		main(int ac, char **av)
{
	int		i;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 0;
	while (++i < ac)
		std::cout << strupper(av[i]);
	std::cout << std::endl;
	return (1);
}
