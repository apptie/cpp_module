/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:42:37 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/02 22:37:57 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const& src);
		virtual ~Animal();

		Animal&			operator=(Animal const& src);
		
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};

#endif
