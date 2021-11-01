/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:55:12 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/28 23:40:22 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void);
	private:
		std::string _name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
