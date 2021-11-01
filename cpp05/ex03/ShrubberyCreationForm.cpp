/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:07:39 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 02:07:40 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shrubbery creation", 145, 137, "default_target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src): Form(src)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form("shrubbery creation", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	(void)src;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	output;
	const std::string	name = _target + "_shrubbery";

	try
	{
		Form::execute(executor);
		output.open(name.data(), std::ofstream::trunc | std::ofstream::out);
	}
	catch (const std::exception& e)
	{
		throw ;
		return ;
	}
	output << "           _  _             _  _" << std::endl;
	output << "  .       /\\\\/%\\       .   /%\\/%\\     ." << std::endl;
	output << "      __.<\\\\%#//\\,_       <%%#/%%\\,__  ." << std::endl;
	output << ".    <%#/|\\\\%%%#///\\    /^%#%%\\///%#\\\\" << std::endl;
	output << "      \"\"/%/\"\"\\ \\\"\"//|   |/\"\"\'/ /\\//\"//'" << std::endl;
	output << " .     L/'`   \\ \\  `    \"   / /  ```" << std::endl;
	output << "        `      \\ \\     .   / /       ." << std::endl;
	output << " .       .      \\ \\       / /  ." << std::endl;
	output << "        .        \\ \\     / /          ." << std::endl;
	output << "   .      .    ..:\\ \\:::/ /:.     .     ." << std::endl;
	output << "______________/ \\__;\\___/\\;_/\\________________________________" << std::endl;
	output.close();
	std::cout << "Form " << _name << " has been executed by " << executor.getName() << std::endl;
}

Form*	ShrubberyCreationForm::clone(std::string const target) const
{
	return (new ShrubberyCreationForm(target));
}
