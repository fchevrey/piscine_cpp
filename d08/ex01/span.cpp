/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:07:26 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/04 18:36:49 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <vector>

span::span(unsigned int N)
{
	if (N != 0)
	{
		this->_arr = std::vector<int>(N, 0);
	}
	this->_size_max = N;
	this->_size = 0;
}

span::span(const span &src)
{
	copy_array(src);
}

int span::shortestSpan(void)
{
	int			min;
	int			tmp = 0;
	std::vector<int>::iterator		it;
	std::vector<int>::iterator		it2;

	min = this->longestSpan();
	it = this->_arr.begin();
	for (it2= this->_arr.begin() +1; it2 != this->_arr.end(); it++)
	{
		tmp = *(it + 1) - *it;
		if (tmp < min)
			min = tmp;
		it2++;
	}
	return min;
}

int span::longestSpan(void)
{
	std::sort(this->_arr.begin(), this->_arr.end());
	return *(this->_arr.end()-1) - *this->_arr.begin();
}

span::~span()
{
}

void span::addNumber(const std::vector<int>::iterator begin, const std::vector<int>::iterator end)
{
	std::vector<int>::iterator		it = begin;

	while (it != end)
	{
		if (this->_size >= this->_size_max)
			throw std::exception();
		this->_arr[this->_size] = *it;
		++this->_size;
		++it;
	}
}

void span::addNumber(int n)
{
	if (this->_size >= this->_size_max)
		throw std::exception();
	this->_arr[this->_size] = n;
	this->_size++;
}

span & span::operator=(const span &rhs)
{
	copy_array(rhs);
	return *this;
}

span::span(void)
{
}

/*        private functions       */
void span::copy_array(const span &src)
{
	if (src._size_max > 0)
	{
		this->_arr = std::vector<int>(src._size_max);
		std::copy (src._arr.begin(), src._arr.end(), this->_arr.begin());
	}
	this->_size = src._size;
	this->_size_max = src._size_max;
}
