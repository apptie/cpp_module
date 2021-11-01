/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:14:36 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 13:08:48 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T & rhs, T & lhs)
{
	T	tmp;

	tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template<typename T>
T const &	min(T const & rhs, T const & lhs)
{
	return (rhs < lhs ? rhs : lhs);
}

template<typename T>
T const &	max(T const & rhs, T const & lhs)
{
	return (rhs > lhs ? rhs : lhs);
}

#endif
