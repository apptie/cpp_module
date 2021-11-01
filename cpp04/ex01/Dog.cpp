/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:02:12 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/02 01:50:05 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): _brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& src): Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Brain& brain): _brain(new Brain(brain))
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const& src)
{
	if (this != &src)
		Animal::operator=(src);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "[Dog's sound]" << std::endl;
}

void	Dog::printIdeas(void) const
{
	_brain->printIdeas();
}

void	Dog::setIdea(size_t i, std::string idea)
{
	_brain->setIdea(i, idea);
}
