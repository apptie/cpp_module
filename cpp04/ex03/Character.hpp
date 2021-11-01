/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:38:12 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 00:31:39 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(Character const& src);
		Character(std::string const name);
		~Character();

		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		std::string	const&	getName(void) const;
		Character&			operator=(Character const& src);
	private:
		std::string const	_name;
		AMateria			**_inventory;
};

#endif
