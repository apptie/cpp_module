/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:24:14 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/11 18:58:44 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "Array check : " << std::endl;
	{
		Animal* array[4];
		size_t	i = 0;
		while (i < 4)
		{
			if (i < 2)
				array[i] = new Dog();
			else
				array[i] = new Cat();
			i++;
		}
		i = 0;
		while (i < 4)
		{
			array[i]->makeSound();
			i++;
		}
		i = 0;
		while (i < 4)
		{
			delete array[i];
			i++;
		}
	}
	std::cout << std::endl << "Deep copy check : " << std::endl;
	{
		Brain	dogs_brain;

		dogs_brain.setIdea(0, "1st idea");
		dogs_brain.setIdea(1, "2nd idea");
		dogs_brain.setIdea(2, "3rd idea");

		Dog	dog(dogs_brain);
		Dog	dog_copy(dog);
		dog.setIdea(2, "another 2nd idea");
		std::cout << std::endl;
		dog.printIdeas();
		std::cout << std::endl;
		dog_copy.printIdeas();
		std::cout << std::endl;
	}
	return (0);
}
