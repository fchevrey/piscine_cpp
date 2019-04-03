/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:32:05 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 19:32:08 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <exception>
//template <template <typename > class T, typename U>//works
//template <typename U, template <typename> class T>

template <typename U, typename T>
U		&easyfind(T collect, U item)
{
	typename T::iterator		it;

	for (it = collect.begin(); it != collect.end(); it++)
	{
		if (*it == item)
			return *it;
	}
	throw std::exception();
	return item;
}
#endif
