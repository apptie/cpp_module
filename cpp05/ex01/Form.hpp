/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:03:09 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 02:03:11 by jimikim          ###   ########.fr       */
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
		Form(std::string const name, size_t const gsing, size_t const gexec);
		~Form();

		const std::string &	getName(void) const;
		const size_t &		getGsign(void) const;
		const size_t &		getGexec(void) const;
		bool				isSigned(void) const;
		void				beSigned(Bureaucrat const & bur);
	private:
		Form &				operator=(Form const & src);
		const std::string	_name;
		bool				_signed;
		const size_t		_gexec;
		const size_t		_gsign;

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
};

std::ostream &				operator<<(std::ostream & out, Form const & input);

#endif
