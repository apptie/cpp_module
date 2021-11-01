/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 01:28:03 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 01:34:19 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		Data();
		Data(Data const & src);
		Data(int value);
		~Data();

		Data &		operator=(Data const & src);
		int			getValue() const;
	private:
		int	_value;
};

std::ostream &			operator<<(std::ostream & out, Data const & i);

#endif
