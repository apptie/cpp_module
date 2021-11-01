/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:03:47 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 11:07:13 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default_form"), _signed(false), _gexec(150), _gsign(150), _target("dafault_target")
{
}

Form::Form(const Form & src): _name(src._name), _signed(false), _gexec(src._gexec), _gsign(src._gsign), _target(src._target)
{
}

Form::Form(std::string const name, size_t const gsign, size_t const gexec, const std::string target): _name(name), _signed(false), _gexec(gexec), _gsign(gsign), _target(target)
{
	if (_gexec < 1 || _gsign < 1)
		throw Form::GradeTooHighException();
	if (_gexec > 150 || _gsign > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form &	Form::operator=(Form const & src)
{
	(void)src;
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Form const & input)
{
	out << "Form " << input.getName() << "." << " Grade required form signature: " << input.getGsign();
	out << ". Grade required for execution: " << input.getGexec() << ".";
	if (input.isSigned())
		out << " This form is signed.";
	else
		out << " This Form is not signed yet.";
	return (out);
}

void	Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() > _gsign)
		throw Form::GradeTooLowException();
	else if (_signed == true)
		throw Form::FormAlreadySignedException();
	else
		_signed = true;
}

const std::string &	Form::getName(void) const
{
	return (_name);
}

const size_t &	Form::getGexec(void) const
{
	return (_gexec);
}

const size_t & Form::getGsign(void) const
{
	return (_gsign);
}

bool	Form::isSigned(void) const
{
	return (_signed);
}

const std::string & Form::getTarget(void) const
{
	return (_target);
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (_signed == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > _gexec)
		throw Form::GradeTooLowException();
}

const char *	Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high...");
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low...");
}

const char *	Form::FormAlreadySignedException::what() const throw()
{
	return ("Form is already signed...");
}

const char *	Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed yet...");
}
