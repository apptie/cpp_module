/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:07:53 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 16:00:17 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

#define YELLOW "\e[33m"
#define RESET "\e[0m"

int main(void)
{
	Intern		intern;
	Bureaucrat	bureaucrat("bureaucrat", 1);
	Form*		fail;
	Form*		rrf;

	std::cout << std::endl << YELLOW << "makeForm() test : " << RESET << std::endl;
	fail = intern.makeForm("fail", "fail");
	rrf = intern.makeForm("robotomy request", "Bender");
	
	std::cout << std::endl << YELLOW << "signForm() & executeForm() test : " << RESET << std::endl;
	bureaucrat.signForm(*rrf);
	bureaucrat.executeForm(*rrf);
	
	if (fail)
		delete fail;
	if (rrf)
		delete rrf;
	return (0);
}
