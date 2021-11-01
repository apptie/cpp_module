/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 02:02:27 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/09 15:43:52 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define YELLOW "\e[33m"
#define RESET "\e[0m"

int main(void)
{
	{
		std::cout << std::endl << YELLOW << "Bureaucrat constructor Too High test : " << RESET << std::endl;
		try 
		{
			Bureaucrat a = Bureaucrat("A", 0);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << YELLOW << "Bureaucrat constructor Too Low test : " << RESET << std::endl;
		try
		{
			Bureaucrat a = Bureaucrat("A", 151);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << YELLOW << "Bureaucrat incGrade() test : " << RESET << std::endl;
		try
		{
			Bureaucrat a = Bureaucrat("A", 1);
			a.incGrade();
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << YELLOW << "Bureaucrat decGrade() test : " << RESET << std::endl;
		try
		{
			Bureaucrat a = Bureaucrat("A", 150);
			a.decGrade();
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << YELLOW << "Bureaucrat log test :" << RESET << std::endl;
		try
		{
			Bureaucrat a = Bureaucrat("A", 1);
			Bureaucrat b = Bureaucrat("B", 150);

			std::cout << a << std::endl;
			std::cout << b << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}
