/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 01:03:24 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/02 01:39:23 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const& src);
		Brain(const std::string ideas[100]);
		~Brain();

		Brain&	operator=(Brain const& src);

		void	setIdea(size_t index, std::string idea);
		void	printIdeas(void) const;
	private:
		std::string	_ideas[100];
};

#endif
