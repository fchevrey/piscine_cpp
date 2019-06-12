/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:54:45 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/04 18:24:03 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>

class span
{
	public :
		span(unsigned int N);
		span(const span & src);
		virtual		~span();

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addNumber(const std::vector<int>::iterator begin, const std::vector<int>::iterator end);
		span &	operator=(const span & rhs);
	private :
		span(void);
		std::vector<int>	_arr;
		unsigned int		_size_max;
		unsigned int		_size;

		void	copy_array(const span & src);
};

#endif
