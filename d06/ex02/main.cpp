/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:59:52 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 11:25:52 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"
#include "B.hpp"
#include "A.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base	*generate(void)
{
	int rd = std::rand() % 3;

	if (rd == 0)
	{
		return new A();
	}
	else if (rd == 1)
	{
		return new B();
	}
	else
	{
		return new C();
	}
}

void	identify_from_pointer(Base *p)
{
	A		*a = NULL;
	B		*b = NULL;
	C		*c = NULL;

	if ((a = dynamic_cast<A *>(p)) != NULL)
	{
		std::cout << "ptr = A" << std::endl;
		return ;
	}
	if ((b = dynamic_cast<B *>(p)) != NULL)
	{
		std::cout << "ptr = B" << std::endl;
		return ;
	}
	if ((c = dynamic_cast<C *>(p)) != NULL)
	{
		std::cout << "ptr = C" << std::endl;
		return ;
	}
	std::cout << "ptr != A, ptr !=B, ptr != C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	Base	pouet;
	try
	{
		A		&a = dynamic_cast<A&>(p);
		std::cout << "ref = A" << std::endl;
		pouet = static_cast<Base>(a);//useless
		return ;
	}
	catch (std::exception &e)
	{}
	try
	{
		B		&b = dynamic_cast<B&>(p);
		std::cout << "ref = B" << std::endl;
		pouet = static_cast<Base>(b);//useless
		return ;
	}
	catch (std::exception &e)
	{}
	try
	{
		C		&c = dynamic_cast<C&>(p);
		std::cout << "ref = C" << std::endl;
		pouet = static_cast<Base>(c);//useless
		return ;
	}
	catch (std::exception &e)
	{}
	std::cout << "ref != A, ptr !=B, ptr != C" << std::endl;
}

int main(void)
{
	std::srand(time(NULL));
	std::cout << "-- Test A --" << std::endl;
	Base *b = new A();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	std::cout << "-- Test B --" << std::endl;
	b = new B();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	std::cout << "-- Test C --" << std::endl;
	b = new C();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;

	std::cout << " -- Random tests --" << std::endl;
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	return 0;
}
