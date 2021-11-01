/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:24:52 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/31 12:01:47 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "usage: ./karenFilter log_level" << std::endl;
		return (1);
	}

	if (karen.complain(argv[1]) == 0)
		std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;

	return (0);
}
