/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 01:30:42 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 01:32:10 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _value(0)
{
}

Data::Data(const Data & src): _value(src._value)
{
}

Data::Data(int value): _value(value)
{
}

Data::~Data()
{
}

Data & Data::operator=(Data const & src)
{
	if (this != &src)
		_value = src._value;
	return (*this);
}

int	Data::getValue() const
{
	return (_value);
}
