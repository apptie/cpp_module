/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 00:46:01 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 01:12:30 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

bool	check(std::string const & str);
bool	convert(std::string const & str);

int main(int argc, char *argv[])
{
	std::string av;

	if (argc != 2)
	{
		std::cerr << "Error: one argument is required" << std::endl;
		return (1);
	}
	av = argv[1];
	if (av.empty())
	{
		std::cerr << "Error: arg's length is null" << std::endl;
		return (1);
	}
	if (!check(av) || !convert(av))
	{
		std::cerr << "Error: impossible conversion" << std::endl;
		return (1);
	}
	return (0);
}
