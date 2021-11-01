/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:17:38 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 13:47:21 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T const *array, unsigned int const len, void (*f)(T const & arg))
{
	unsigned int	i = 0;

	while (i < len)
	{
		(f)(array[i]);
		i++;
	}
}

#endif
