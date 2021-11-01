/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:25:09 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 14:56:45 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

#define YELLOW "\e[33m"
#define RESET "\e[0m"

int main(int, char**)
{
	Array<int>	numbers(10);
	int*		mirror = new int[10];
	int			i = 0;

	srand(time(NULL));
	while (i < 10)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		i++;
	}

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	i = 0;
	std::cout << std::endl << YELLOW << "Array input value test : " << RESET;
	while (i < 10)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "not same value." << std::endl;
			return (1);
		}
		i++;
	}
	std::cout << "OK!" << std::endl;;
	std::cout << numbers;

	std::cout << std::endl<< YELLOW << "Array OutOfRange test : " << RESET;
	std::cout << std::endl << YELLOW << "minus index: " << RESET << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl<< YELLOW << "over index : " << RESET << std::endl;
	try
	{
		numbers[10] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << YELLOW << "Array input value test : " << RESET << std::endl;
	i = 0;
	while (i < 10)
	{
		numbers[i] = rand();
		i++;
	}
	std::cout << numbers;
	
	delete [] mirror;
	return (0);
}
