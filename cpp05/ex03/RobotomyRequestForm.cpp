/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:07:23 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 02:07:24 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", 72, 45, "default_target")
{
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src): Form(src)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("robotomy request", 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	(void)src;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::srand(std::time(NULL));
	int result = rand() % 2;

	try
	{
		Form::execute(executor);
	}
	catch (const std::exception& e)
	{
		throw ;
		return ;
	}
	std::cout << "[DRILL NOISE]" << std::endl;
	if (result)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << _target << "'s robotomization failed" << std::endl;
}

Form*	RobotomyRequestForm::clone(std::string const target) const
{
	return (new RobotomyRequestForm(target));
}
