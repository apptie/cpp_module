/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 00:34:14 by jimikim           #+#    #+#             */
/*   Updated: 2021/08/28 18:34:59 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		
		void	AddContact();
		void	FindContact();
	private:
		Contact contacts[8];
		
		int		length;
		int		old;
		
		void	DisplayContact();
		void	DisplayContactRowByIndex(int index, char sep, int cell_width);
		void	PrintBook();
};

#endif
