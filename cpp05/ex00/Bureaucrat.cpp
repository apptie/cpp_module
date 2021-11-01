/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:02:03 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 15:22:43 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("new"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & src): _name(src._name), _grade(src._grade)
{
}

Bureaucrat::Bureaucrat(std::string const name, size_t grade): _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & src)
{
	(void)src;
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & input)
{
	out << input.getName() << ", bureaucrat grade " << input.getGrade() << ".";
	return out;
}

void	Bureaucrat::incGrade(void)
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decGrade(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::string const	Bureaucrat::getName(void) const
{
	return (_name);
}

size_t	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high...");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low...");
}
