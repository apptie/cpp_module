/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:45:24 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 17:32:05 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed& src);
		~Fixed(void);
		
		Fixed&	operator=(Fixed const& src);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_value;
		const static int	_bits;
};

#endif
