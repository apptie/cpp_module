/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 22:51:12 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/05 18:06:08 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getDamage());
	
	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getDamage());
	
	std::cout << std::endl;
	
	b.guardGuate();
	
	std::cout << std::endl;
	return (0);
}
