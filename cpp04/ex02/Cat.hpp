/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:53:07 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/02 22:28:06 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const& src);
		Cat(Brain& brain);
		~Cat();

		Cat	&	operator=(Cat const& srC);
		
		void	makeSound(void) const;
		void	printIdeas(void) const;
		void	setIdea(size_t i, std::string idea);
	private:
		Brain	*_brain;
};

#endif
