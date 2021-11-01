/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:36:35 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/29 01:56:02 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	
	std::string	*stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "string address : " << &brain << std::endl;
	std::cout << "string address by pointer : " << stringPTR << std::endl;
	std::cout << "string address by reference : " << &stringREF << std::endl;
	
	std::cout << "===============================" << std::endl;
	
	std::cout << "string by pointer : " << *stringPTR << std::endl;
	std::cout << "string by reference : " << stringREF << std::endl;
}
