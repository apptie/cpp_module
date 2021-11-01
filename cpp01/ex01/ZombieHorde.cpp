/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:18:33 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/29 00:23:37 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie				*zombies = new Zombie[N];
	int					i = 0;
	std::stringstream	ss;
	
	while (i < N)
	{
		ss.str(std::string());
		ss << i;
		zombies[i].setName(name + ss.str());
		i++;
	}
	return (zombies);
}
