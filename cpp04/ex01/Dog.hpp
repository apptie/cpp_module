/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:59:57 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/02 01:48:00 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const& src);
		Dog(Brain& brain);
		~Dog();

		Dog&	operator=(Dog const& src);

		void	makeSound(void) const;
		void	printIdeas(void) const;
		void	setIdea(size_t i, std::string idea);
	private:
		Brain	*_brain;
};

#endif
