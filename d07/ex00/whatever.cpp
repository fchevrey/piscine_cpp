/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:20:23 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 14:14:43 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void		swap(T &x, T &y)
{
	T tmp = y;
	y = x;
	x = tmp;
}
template <typename T>
T		max(T &x, T &y)
{
	return (x > y ? x : y);
}

template <typename T>
T		min(T &x, T &y)
{
	return (x < y ? x : y);
}

int main(void)
{
	int		x = 12;
	int		y = 5;
	float	fx = 12.5f;
	float	fy = 12.5f;
	std::string			s1 = "AAAB";
	std::string			s2 = "AAAC";

	std::cout << "x = "<< x<< " y = "<< y << std::endl;
	::swap<int>(x, y);
	std::cout << "x = "<< x<< " y = "<< y << std::endl;
	std::cout << "max = "<< max<int>(x, y) << std::endl;
	std::cout << "min = "<< min<int>(x, y) << std::endl;
	std::cout << "x = "<< fx<< " y = "<< fy << std::endl;
	std::cout << "max = "<< max<float>(fx, fy) << std::endl;
	std::cout << "min = "<< min<float>(fx, fy) << std::endl;
	fx = 44.0f;
	std::cout << "x = "<< fx<< " y = "<< fy << std::endl;
	::swap<float>(fx, fy);
	std::cout << "x = "<< fx<< " y = "<< fy << std::endl;
	std::cout << "s1 = \""<< s1 << "\" s2 = \""<< s2<< "\"" << std::endl;
	::swap<std::string>(s1, s2);
	std::cout << "s1 = \""<< s1 << "\" s2 = \""<< s2<< "\"" << std::endl;
	std::cout << "max = \""<< max<std::string>(s1, s2) << "\"" << std::endl;
	std::cout << "min = \""<< min<std::string>(s1, s2) << "\"" << std::endl;
	return 0;
}
