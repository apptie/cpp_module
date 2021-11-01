/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:41:42 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 00:32:12 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): _name("default_name"), _inventory(new AMateria*[4])
{
	size_t	i = 0;
	
	while (i < 4)
	{
		_inventory[i] = NULL;
		i++;
	}
}

Character::Character(const Character& src): _name(src._name), _inventory(new AMateria*[4])
{
	size_t	i = 0;
	
	while (i < 4)
	{
		_inventory[i] = src._inventory[i]->clone();
		i++;
	}
}

Character::Character(std::string const name): _name(name), _inventory(new AMateria*[4])
{
	size_t	i = 0;

	while (i < 4)
	{
		_inventory[i] = NULL;
		i++;
	}
}

Character::~Character()
{
	size_t	i = 0;

	while (i < 4)
	{
		if (_inventory[i])
			delete _inventory[i];
		i++;
	}
	delete [] _inventory;
}

Character&	Character::operator=(Character const& src)
{
	if (this != &src)
	{
		size_t	i = 0;

		while (i < 4)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = src._inventory[i]->clone();
			i++;
		}
	}
	return (*this);
}

void	Character::equip(AMateria* m)
{
	size_t	i = 0;

	while (i < 4)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4 && _inventory[idx])
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

std::string const&	Character::getName(void) const
{
	return (_name);
}
