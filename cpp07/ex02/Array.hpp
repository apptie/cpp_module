/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:01:56 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 14:25:02 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{
	public:
		Array(): _size(0), _array(NULL) {};
		Array(unsigned int n): _array(new T[n]), _size(n) {};
		Array(Array const & src): _size(src._size)
		{
			unsigned int i = 0;
			_array = new T[_size];

			while (i < _size)
			{
				_array[i] = src._array[i];
				i++;
			}
		};
		~Array() 
		{
			if (_array)
				delete [] _array;
		};
		Array &		operator=(Array const & rhs)
		{
			unsigned int	i = 0;

			if (&rhs == this)
				return (*this);
			if (_array)
				delete [] _array;
			_size = rhs._size;
			if (_size)
			{
				_array = new T[_size];
				while (i < _size)
				{
					_array[i] = rhs._array[i];
					i++;
				}
			}
			else
				_array = NULL;
		};
		T &	operator[](unsigned int i)
		{
			if (i >= _size)
			{
				throw OutOfRange();
			}
			return (_array[i]);
		};
		T	operator[](unsigned int i) const
		{
			if (i >= _size)
			{
				throw OutOfRange();
			}
			return (_array[i]);
		}
		unsigned int	size(void) const
		{
			return (_size);
		};
		class OutOfRange: public std::exception
		{
			const char * what() const throw()
			{
				return ("Out of range...");
			};
		};
	private:
		T				*_array;
		unsigned int	_size;
};

template<typename T>
std::ostream &			operator<<(std::ostream & out, Array<T> const & rhs)
{
	unsigned int	i = 0;

	while (i < rhs.size())
	{
		out << rhs[i] << std::endl;
		i++;
	}
	return (out);
}
#endif
