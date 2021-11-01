/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:07:02 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/30 11:32:04 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::FillContact()
{
	std::cout << "Please enter contact info : " << std::endl;
	std::cout << "first name : ";
	std::getline(std::cin, first_name);
	std::cout << "last name : ";
	std::getline(std::cin, last_name);
	std::cout << "nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, phone_number);
	std::cout << "darkest secret : ";
	std::getline(std::cin, darkest_secret);
	std::cout << "Contact is created!" << std::endl;
}

void	Contact::PrintContact()
{
	std::cout << "first name : " << first_name << std::endl;
	std::cout << "last name : " << last_name << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phone_number << std::endl;
	std::cout << "darkest secret : " << darkest_secret << std::endl;
}

std::string	Contact::AlignField(std::string field, int cell_width)
{
	if ((int)field.size() > cell_width)
		return (field.substr(0, cell_width - 1) + ".");
	else
		return (std::string(cell_width - field.size(), ' ') + field);
}

void	Contact::PrintShortInfo(char sep, int cell_width)
{
	std::cout << \
		sep << AlignField(this->first_name, cell_width) << \
		sep << AlignField(this->last_name, cell_width) << \
		sep << AlignField(this->nickname, cell_width) << \
		sep << std::endl;
}
