/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 00:15:29 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 00:18:53 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* player = new Character("player");
	AMateria* temp;
	temp = src->createMateria("ice");
	player->equip(temp);
	temp = src->createMateria("cure");
	player->equip(temp);
	ICharacter* enemy = new Character("enemy");
	player->use(0, *enemy);
	player->use(1, *enemy);

	delete enemy;
	delete player;
	delete src;
	return (0);
}
