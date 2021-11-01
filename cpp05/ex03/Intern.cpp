/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:06:52 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 12:40:43 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(): _forms(new Form*[3])
{
	_forms[0] = new ShrubberyCreationForm();
	_forms[1] = new RobotomyRequestForm();
	_forms[2] = new PresidentialPardonForm();
}

Intern::Intern(const Intern & src): _forms(new Form*[3])
{
	size_t	i = 0;

	while (i < 3)
	{
		_forms[i] = src._forms[i];
		i++;
	}
}

Intern::~Intern()
{
	size_t	i = 0;
	
	while (i < 3)
	{
		if (_forms[i])
			delete _forms[i];
		i++;
	}
	delete [] _forms;
}

Intern &	Intern::operator=(Intern const & src)
{
	size_t	i = 0;

	while (i < 3)
	{
		if (_forms[i])
			delete _forms[i];
		_forms[i] = src._forms[i];
		i++;
	}
	return (*this);
}

Form*	Intern::makeForm(std::string const name, std::string const target)
{
	size_t	i = 0;

	while (i < 3)
	{
		if (_forms[i]->getName() == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (_forms[i]->clone(target));
		}
		i++;
	}
	std::cerr << "Intern couldnt't create form \"" << name << "\"" << std::endl;
	return (NULL);
}
