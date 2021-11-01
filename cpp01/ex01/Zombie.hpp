/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:55:12 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/29 00:20:11 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <sstream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		
		void	announce(void);
		void	setName(std::string name);
	private:
		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
