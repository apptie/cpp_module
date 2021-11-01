/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:54:06 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/11 18:57:03 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& src): Animal(src)
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Brain& brain): _brain(new Brain(brain))
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const& src)
{
	if (this != &src)
	{
		Animal::operator=(src);
		*_brain = *src._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "[Cat's Sound]" << std::endl;
}

void	Cat::printIdeas(void) const
{
	_brain->printIdeas();
}

void	Cat::setIdea(size_t i, std::string idea)
{
	_brain->setIdea(i, idea);
}
