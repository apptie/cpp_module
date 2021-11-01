/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:45:55 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 17:54:10 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <stack>
#include <iostream>

int main(void)
{
	std::vector<int>			container(10, 50);
	std::vector<int>::iterator	it;
	std::vector<char>			wrong(10, 'o');
	std::vector<char>::iterator	wrong_it;

	it = easyfind(container, 50);
	if (it != container.end())
		std::cout << 50 << " has been found" << std::endl;
	else
		std::cout << 50 << " has not been found" << std::endl;
	try
	{
		wrong_it = easyfind(wrong, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
