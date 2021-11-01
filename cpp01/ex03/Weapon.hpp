/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:06:42 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/28 18:38:09 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);
		
		void	setType(std::string type);
		const std::string	&getType(void);
	private:
		std::string	_type;
		
		Weapon(void);
};

#endif
