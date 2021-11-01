/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:06:48 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/03 00:31:00 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const& src);
		AMateria(std::string const& type);
		virtual ~AMateria();
		
		std::string const&	getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string const	_type;
		AMateria&			operator=(AMateria const& src);
};

#endif
