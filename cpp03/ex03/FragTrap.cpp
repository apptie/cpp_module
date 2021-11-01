/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:41:03 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 14:08:04 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	_hit = 100;
	_energy = 100;
	_damage = 30;
	std::cout << GREEN;
	std::cout << "FragTrap default constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap(src)
{
	std::cout << GREEN;
	std::cout << "FragTrap copy constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hit = 100;
	_energy = 100;
	_damage = 30;
	std::cout << GREEN;
	std::cout << "FragTrap string constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap::~FragTrap()
{
	std::cout << RED;
	std::cout << "FragTrap destructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap&	FragTrap::operator=(FragTrap const& src)
{
	ClapTrap::operator=(src);
	std::cout << CYAN;
	std::cout << "FragTrap operator = (" << _name << ") called" << std::endl;
	std::cout << RESET;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW;
	std::cout << "FragTrap " << _name << " high five" << std::endl;
	std::cout << RESET;
}
