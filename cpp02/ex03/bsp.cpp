/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:58:55 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 19:28:34 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int 	cross_count = 0;
	Fixed	check_x;
	
	if ((a.get_y() > point.get_y()) != (b.get_y() > point.get_y()))
	{
		check_x = (b.get_x() - a.get_x()) * (point.get_y() - a.get_y()) / (b.get_y() - a.get_y()) + a.get_x();
		if (point.get_x() < check_x)
			cross_count++;
	}


	if ((b.get_y() > point.get_y()) != (c.get_y() > point.get_y()))
	{
		check_x = (c.get_x() - b.get_x()) * (point.get_y() - b.get_y()) / (c.get_y() - b.get_y()) + b.get_x();
		if (point.get_x() < check_x)
			cross_count++;
	}

	if ((c.get_y() > point.get_y()) != (a.get_y() > point.get_y()))
	{
		check_x = (a.get_x() - c.get_x()) * (point.get_y() - c.get_y()) / (a.get_y() - c.get_y()) + c.get_x();
		if (point.get_x() < check_x)
			cross_count++;
	}
	
	return (cross_count % 2 == 1);
}
