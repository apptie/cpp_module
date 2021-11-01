/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:21:07 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/29 00:55:06 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies = zombieHorde(10, "zombie");
	int		i = 0;

	while (i < 10)
	{
		zombies[i].announce();
		i++;
	}
	
	delete [] zombies;
	
	return (0);
}
