/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:06:57 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 02:06:58 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();

		Intern &	operator=(Intern const & src);
		Form*		makeForm(std::string const name, std::string const targeT);
	private:
		Form		**_forms;
};

#endif
