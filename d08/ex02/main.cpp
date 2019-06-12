/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:55:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/05 18:43:16 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main(void)
{
	MutantStack<int>    mstack;
	MutantStack<int>    mstack2;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	mstack2.push(33);
	mstack2.push(737);
	mstack2.push(55);
	mstack2.push(89);
	it = mstack2.begin();
	ite = mstack2.end();
	std::cout << "" << std::endl;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
