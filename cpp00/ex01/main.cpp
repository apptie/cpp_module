/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:44:28 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/30 12:18:43 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	book;

	while (1)
	{
		std::cout << "enter command : ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			book.AddContact();
		else if (cmd == "SEARCH")
			book.FindContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "command not found" << std::endl;
	}
	return (0);
}
