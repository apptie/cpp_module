/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:09:49 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 18:17:13 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src): _type(src._type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& src)
{
	if (this == &src)
		this->_type = src.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I am a wrong animal" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}
