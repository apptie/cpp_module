/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:02:46 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 15:43:27 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string const name, size_t grade);
		~Bureaucrat();

		Bureaucrat &		operator=(Bureaucrat const & src);
		
		std::string const	getName(void) const;
		size_t				getGrade(void) const;
		void				incGrade(void);
		void				decGrade(void);
		void				signForm(Form & form);
	private:
		std::string const	_name;
		size_t				_grade;
	
	class GradeTooHighException: public std::exception
	{
		const char * what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char * what() const throw();
	};
};

std::ostream &				operator<<(std::ostream & out, Bureaucrat const & input);

#endif
