/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 00:32:10 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/30 12:08:05 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->length = 0;
	this->old = 0;
}

void	PhoneBook::DisplayContact()
{
	std::string	input;
	int			index;

	std::cout << "Enter a number : ";
	std::getline(std::cin, input);
	if (!(input[0] && !input[1] && '1' <= input[0] && input[0] <= '9'))
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	index = input[0] - '0';
	if (index > length)
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	contacts[index - 1].PrintContact();
}

void	PhoneBook::DisplayContactRowByIndex(int index, char sep, int cell_width)
{
	std::cout << std::setw(cell_width) << index + 1;
	contacts[index].PrintShortInfo(sep, cell_width);
}

void	PhoneBook::PrintBook()
{
	int		cell_width;
	char	sep;
	int		index;

	cell_width = 10;
	sep = '|';
	std::cout << std::setw(cell_width) << "index" << sep << \
		std::setw(cell_width) << "first name" << sep << \
		std::setw(cell_width) << "last name" << sep << \
		std::setw(cell_width) << "nickname" << sep << std::endl;
	index = 0;
	while (index < this->length)
	{
		DisplayContactRowByIndex(index, sep, cell_width);
		index++;
	}
}

void	PhoneBook::AddContact()
{
	Contact contact;

	contact.FillContact();
	if (this->length == 8)
	{
		contacts[old] = contact;
		old++;
		if (old == 8)
			old = 0;
	}
	else
	{
		contacts[length] = contact;
		length++;
	}
}

void	PhoneBook::FindContact()
{
	if (this->length == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	this->PrintBook();
	this->DisplayContact();
	return ;
}
