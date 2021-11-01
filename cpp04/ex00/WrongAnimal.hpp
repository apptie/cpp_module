/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:06:37 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 18:28:40 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		virtual	~WrongAnimal();

		WrongAnimal&	operator=(WrongAnimal const& src);

		std::string		getType(void) const;
		void			makeSound(void) const;
	protected:
		std::string		_type;
};

#endif
