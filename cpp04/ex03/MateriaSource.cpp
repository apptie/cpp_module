/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 00:08:58 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 00:15:18 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _source(new AMateria*[4])
{
	size_t	i = 0;
	
	while (i < 4)
	{
		_source[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource& src): _source(new AMateria*[4])
{
	size_t	i = 0;

	while (i < 4)
	{
		_source[i] = src._source[i]->clone();
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	size_t	i = 0;

	while (i < 4)
	{
		if (_source[i])
			delete _source[i];
		i++;
	}
	delete [] _source;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& src)
{
	if (this != &src)
	{
		size_t	i = 0;

		while (i < 4)
		{
			if (_source[i])
				delete _source[i];
			_source[i] = src._source[i]->clone();
			i++;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	size_t	i = 0;
	
	while (i < 4)
	{
		if (!_source[i])
		{
			_source[i] = m;
			return ;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	size_t	i = 0;

	while (i < 4)
	{
		if (_source[i] && _source[i]->getType() == type)
			return (_source[i]->clone());
		i++;
	}
	return (NULL);
}
