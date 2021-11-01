/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:06:45 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 02:06:46 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(Form const & src);
		Form(std::string const name, size_t const gsing, size_t const gexec, std::string const target);
		virtual ~Form();

		const std::string &	getName(void) const;
		const std::string &	getTarget(void) const;
		const size_t &		getGsign(void) const;
		const size_t &		getGexec(void) const;
		bool				isSigned(void) const;
		void				beSigned(Bureaucrat const & bur);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		virtual Form*		clone(std::string const target) const = 0;
	protected:
		Form &				operator=(Form const & src);
		const std::string	_name;
		bool				_signed;
		const size_t		_gexec;
		const size_t		_gsign;
		std::string const	_target;

		class GradeTooHighException: public std::exception
		{
			const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			const char * what() const throw();
		};

		class FormAlreadySignedException: public std::exception
		{
			const char * what() const throw();
		};

		class FormNotSignedException: public std::exception
		{
			const char * what() const throw();
		};
};

std::ostream &				operator<<(std::ostream & out, Form const & input);

#endif
