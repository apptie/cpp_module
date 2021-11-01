/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:03:17 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 15:52:58 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define YELLOW "\e[33m"
#define RESET "\e[0m"

int main(void)
{
	Form		form("form", 10, 10);
	Bureaucrat	a("A", 1);
	Bureaucrat	b("B", 150);

	std::cout << std::endl << YELLOW << "log test :" << RESET << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << form << std::endl;

	std::cout << std::endl << YELLOW << "beSigned() test :" << RESET << std::endl;
	try
	{
		form.beSigned(b);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << YELLOW << "signForm() test :" << RESET << std::endl;
	b.signForm(form);
	a.signForm(form);
	
	return (0);
}
