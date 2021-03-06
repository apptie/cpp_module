/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:19:32 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 18:31:48 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src)
{
	std::cout << "WrongCat costructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& src)
{
	if (this != &src)
		WrongAnimal::operator=(src);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "[WrongCat's sound]" << std::endl;
}
