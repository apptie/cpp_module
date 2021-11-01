/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:47:24 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 13:59:06 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

class A
{
	public:
		A(void) : _value(42)
		{
			return ;
		}

		int get(void) const
		{
			return (this->_value);
		}
	private:
		int _value;
};

std::ostream & operator<<(std::ostream & out, A const & rhs)
{
	out << rhs.get();
	return (out);
}

template<typename T>
void print(T const & target)
{
	std::cout << target << std::endl;
	return ;
}

int main(void)
{
	std::string	str_array[5] = {"one", "two", "three", "four", "five"};
	A			a_array[5];
	int			size = 5;

	::iter(str_array, size, ::print);
	std::cout << std::endl;
	::iter(a_array, size, ::print);
	return (0);
}
