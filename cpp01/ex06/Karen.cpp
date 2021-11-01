/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:26:37 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/31 13:57:31 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

int	Karen::complain(std::string level)
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
	int count = 0;

	switch (idx)
	{
		case 0:
			ptr = table[0].f;
			(this->*ptr)();
			count++;
		case 1: 
			ptr = table[1].f;
			(this->*ptr)();
			count++;
		case 2: 
			ptr = table[2].f;
			(this->*ptr)();
			count++;
		case 3: 
			ptr = table[3].f;
			(this->*ptr)();
			count++;
	}
	return (count);
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
