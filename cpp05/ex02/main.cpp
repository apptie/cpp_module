/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:06:13 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 09:27:56 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define YELLOW "\e[33m"
#define RESET "\e[0m"

int main(void)
{
	Bureaucrat	a("A", 1);
	Bureaucrat	b("B", 150);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << std::endl << YELLOW << "Shrubbery creation test:" << RESET << std::endl;
	{
		ShrubberyCreationForm	form("Island");

		std::cout << form << std::endl;
		b.signForm(form);
		a.signForm(form);
		b.executeForm(form);
		a.executeForm(form);
	}
	
	std::cout << std::endl << YELLOW << "Robotomy request test:" << RESET << std::endl;
	{
		RobotomyRequestForm	form("target");

		std::cout << form << std::endl;
		b.signForm(form);
		a.signForm(form);
		b.executeForm(form);
		a.executeForm(form);
	}
	
	std::cout << std::endl << YELLOW << "Presidential pardon test:" << RESET << std::endl;
	{
		PresidentialPardonForm	form("target");

		std::cout << form << std::endl;
		b.signForm(form);
		a.signForm(form);
		b.executeForm(form);
		a.executeForm(form);
	}
	
	return (0);
}
