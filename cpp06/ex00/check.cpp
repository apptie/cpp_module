/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 00:46:53 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 01:15:09 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	checkChar(std::string const & str)
{
	if (str.length() != 1 || isdigit(str[0]))
		return (false);
	return (true);
}

bool	checkInt(std::string const & str)
{
	size_t	i = 0;

	if (str.find('-') != std::string::npos
			&& (str.find('-') != str.rfind('-') || str.find('-') != 0))
		return (false);
	while (i < str.length())
	{
		if (!isdigit(str[i]) && str[i] != '-')
			return (false);
		i++;
	}
	return (true);
}

bool	checkFloat(std::string const & str)
{
	size_t	i = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str.find('.') == std::string::npos
			|| str.find('.') == 0
			|| str.find('.') == str.length() - 1
			|| str.find('.') != str.rfind('.')
			|| str.find('f') != str.length() - 1)
		return (false);
	if (str.find('-') != std::string::npos
			&& (str.find('-') != str.rfind('-') || str.find('-') != 0))
		return (false);
	while (i < str.length() - 1)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

bool	checkDouble(std::string const & str)
{
	size_t	i = 0;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (str.find('.') == std::string::npos
			|| str.find('.') == 0
			|| str.find('.') != str.rfind('-')
			|| str.find('.') != str.rfind('.'))
		return (false);
	if (str.find('-') != std::string::npos
			&& (str.find('-') != str.rfind('-') || str.find('-') != 0))
		return (false);
	while (i < str.length() - 1)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

bool	check(std::string const & str)
{
	return (checkChar(str)
			|| checkInt(str)
			|| checkFloat(str)
			|| checkDouble(str));
}
