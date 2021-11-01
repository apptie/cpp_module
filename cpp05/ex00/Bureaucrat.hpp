/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:02:12 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 15:45:18 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string const name, size_t grade);
		~Bureaucrat();
		
		std::string const	getName(void) const;
		size_t				getGrade(void) const;
		void				incGrade(void);
		void				decGrade(void);
	private:
		std::string const	_name;
		size_t				_grade;
		Bureaucrat &		operator=(Bureaucrat const & src);
	
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
