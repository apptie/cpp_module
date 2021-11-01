/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 01:11:35 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/02 22:41:03 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
	*this = src;
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const std::string ideas[100])
{
	size_t	i = 0;

	while (i < 100)
	{
		_ideas[i] = ideas[i];
		i++;
	}
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain const& src)
{
	size_t i = 0;

	if (this != &src)
	{
		while (i < 100)
		{
			_ideas[i] = src._ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::printIdeas(void) const
{
	size_t i = 0;
	
	while (i < 100)
	{
		if (_ideas[i].length())
			std::cout << _ideas[i] << std::endl;
		i++;
	}
}

void	Brain::setIdea(size_t index, std::string idea)
{
	_ideas[index] = idea;
}
