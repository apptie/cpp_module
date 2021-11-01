/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:46:52 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 19:31:30 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Point const & src);
		Point(Fixed const x, Fixed const y);
		~Point();

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
	private:
		Fixed const _x;
		Fixed const _y;
		
		Point & operator=(Point const & src);
};

#endif
