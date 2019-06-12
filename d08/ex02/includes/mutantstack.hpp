/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:53:27 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/05 12:20:37 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		typedef std::__deque_iterator<int, int *, int &, int **, long> iterator;
		MutantStack<T>(void) : std::stack<T>() {}
		MutantStack<T>(const MutantStack &src) : std::stack<T>(src) {}
		virtual		~MutantStack<T>() {}

		MutantStack::iterator    begin(void)
		{
			return this->c.begin();
		}
		MutantStack::iterator    end(void)
		{
			return this->c.end();
		}

		MutantStack &	operator=(const MutantStack & rhs) 
		{
			static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(rhs);
			return *this;
		}
};

#endif
