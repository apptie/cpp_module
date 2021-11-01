/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:09:00 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/01 15:35:11 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const& src);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap&	operator=(ScavTrap const& src);
		
		void		attack(std::string const& target);
		void		guardGuate(void);
	protected:
		bool		_guard_mode;
};

#endif
