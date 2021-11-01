/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:17:19 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/02 23:38:04 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria& src): _type(src._type)
{
}

AMateria::AMateria(std::string const& type): _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria&	AMateria::operator=(AMateria const& src)
{
	(void)src;
	return (*this);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}

std::string const&	AMateria::getType(void) const
{
	return (_type);
}
