/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:40:25 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/16 23:03:15 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <typeinfo>

class WrongContainerException: public std::exception
{
	const char * what() const throw()
	{
		return ("Error: wrong container type");
	}
};

template<typename T>
typename T::iterator	easyfind(T & container, int value)
{
	if (typeid(T) != typeid(std::vector<int>)
			&& typeid(T) != typeid(std::deque<int>)
			&& typeid(T) != typeid(std::list<int>)
			&& typeid(T) != typeid(std::map<int, int>)
			&& typeid(T) != typeid(std::set<int>))
	{
		throw WrongContainerException();
	}
	return (std::find(container.begin(), container.end(), value));
}

#endif
