/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:16:13 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 14:44:56 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

void		print(int  i)
{
	std::cout << ", " << i;
}
void		printstr(std::string  i)
{
	std::cout << ", " << i;
}

template< typename T, typename U, typename V >
void		iter(T *array, U len, V *fun)
{
	U	i = 0;

	while (i < len)
	{
		fun(array[i]);
		i++;
	}
}

int main(void)
{
	int		arr_i[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	long i = 10;
	size_t j = 10;
	std::string		arr_str[] = {"AA", "BB", "CC", "DD", "EE", "FF", "GG", "HH", "II", "JJ"};

	iter(arr_i, i, &print);
	std::cout << std::endl;
	iter(arr_str, j, &printstr);
	std::cout << std::endl;
	return 0;
}
