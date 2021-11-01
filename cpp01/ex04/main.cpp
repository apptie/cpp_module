/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:23:27 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/30 02:08:06 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4 || std::strlen(argv[2]) == 0)
	{
		std::cout << "usage: ./replace filename string_to_find string_to_replace" << std::endl;
		return (1);
	}

	std::string	out_name = argv[1];

	out_name.append(".replace");

	std::ifstream	ifs;

	ifs.open(argv[1]);
	if (ifs.fail())
	{
		std::cout << "Error: Cannot open '" << argv[1] << "'" << std::endl;
		return (1);
	}

	std::ofstream	ofs;

	ofs.open(out_name);
	if (ofs.fail())
	{
		std::cout << "Error : Cannot create '" << out_name << "'" << std::endl;
		ifs.close();
		return (1);
	}

	std::string	content;
	
	do
	{
		std::getline(ifs, content);

		while (true)
		{
			size_t	idx = content.find(argv[2]);

			if (idx == std::string::npos)
			{
				ofs << content;
				break ;
			}
			ofs << content.substr(0, idx) << argv[3];
			content = content.substr(idx + std::strlen(argv[2]));
		}

		if (ifs.eof())
			break ;

		ofs << std::endl;
	} while (true);

	ifs.close();
	ofs.close();
	
	return (0);
}
