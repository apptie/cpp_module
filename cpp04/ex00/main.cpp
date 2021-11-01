/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:24:14 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 18:28:48 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	i = new Dog();
	const Animal*	j = new Cat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	
	meta = j;
	meta->makeSound();
	meta = i;
	meta->makeSound();

	delete i;
	delete j;

	std::cout << std::endl;
	const WrongAnimal* meta_wrong = new WrongCat();
	meta_wrong->makeSound();
	
	delete meta_wrong;
	return (0);
}
