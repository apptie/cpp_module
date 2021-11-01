/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:48:45 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 18:29:15 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& src): _type(src._type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const& src)
{
	if (this == &src)
		this->_type = src.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "I am an animal!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}
