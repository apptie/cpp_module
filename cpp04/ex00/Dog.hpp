/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:59:57 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 18:28:07 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const& src);
		~Dog();

		Dog&	operator=(Dog const& src);
		void	makeSound(void) const;
};

#endif
