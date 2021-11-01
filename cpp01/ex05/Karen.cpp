/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:26:37 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/31 12:28:15 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	t_lookup	table[4] = {
		{"DEBUG",	&Karen::debug},
		{"INFO",	&Karen::info},
		{"WARNING",	&Karen::warning},
		{"ERROR",	&Karen::error}
	};

	void	(Karen::*ptr)(void);

	std::string	level_array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string *level_array_ptr = std::find(level_array, level_array + 4, level);
	
	int idx = level_array_ptr - level_array;

	std::cout << "[ " << level << " ]" << std::endl;
	ptr = table[idx].f;
	(this->*ptr)();
	std::cout << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
