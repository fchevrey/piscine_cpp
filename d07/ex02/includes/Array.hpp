/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:33:34 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 18:21:10 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <string>
template< typename T >

class Array
{
	public :
		/* Canonical form*/
		Array<T>(void)
		{
			this->_array = NULL;
			this->_size = 0;
		}

		Array<T>(unsigned int n)
		{
			this->_array =  new T[n];
			for (unsigned int i = 0; i < n; i++)
			{
				this->_array[i] = T();
			}
			this->_size = n;
		}

		Array<T>(const Array & src)
		{
			this->_array = NULL;
			this->_size = src._size;
			this->CopyArray(src);
		}

		virtual		~Array<T>() 
		{
			this->DelArray();
		}
		/* public functions */

		unsigned int size(void)
		{
			return (this->_size);
		}
		/* operator overload */

		T	&operator[](unsigned int index)
		{
			if (index >= this->_size || index < 0)
				throw std::out_of_range("index out of range");
			return (this->_array[index]);
		}

		T	const &operator[] (unsigned int index) const
		{
			if (index >= this->_size || index < 0)
				throw std::out_of_range("index out of range");
			return (this->_array[index]);
		}

		Array &	operator=(const Array & rhs)
		{
			this->DelArray();
			this->_size = rhs.size();
			this->CopyArray(rhs);
			return *this;
		}

	private :
		T				*_array;
		unsigned int	_size;

		/* private functions */
		void	CopyArray(const Array src)
		{
			if (!src._array)
			{
				this->_array = NULL;
				return ;
			}
			this->_array = new T[src._size];
			for (unsigned int i = 0; i < src._size; i++)
			{
				this->_array[i] = T(src._array[i]);
			}
		}
		void	DelArray()
		{
			if (this->_array)
			{
				delete [] this->_array;
			}
		}
};

#endif
