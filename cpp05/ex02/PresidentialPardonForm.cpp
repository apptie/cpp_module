/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:04:11 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 02:04:12 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon", 25, 5, "default_taget")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src): Form(src)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("presidential pardon", 25, 5, target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	(void)src;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch (const std::exception& e)
	{
		throw ;
		return ;
	}
	std::cout << _target << " was forgiven by Zafod Beeblebrox" << std::endl;
}
