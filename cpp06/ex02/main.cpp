/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 01:40:26 by jimikim           #+#    #+#             */
/*   Updated: 2021/10/08 01:48:53 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void)
{
	std::srand(std::time(NULL));
	int	nb = rand() % 3;

	if (!nb)
	{
		std::cout << "Generate class A" << std::endl;
		return (new A);
	}
	else if (nb == 1)
	{
		std::cout << "Generate class B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Generate class C" << std::endl;
		return (new C);
	}
}

void	identify_from_pointer(Base *p)
{
	A	*ptr_a = dynamic_cast<A *>(p);
	B	*ptr_b = dynamic_cast<B *>(p);
	C	*ptr_c = dynamic_cast<C *>(p);

	if (ptr_a)
		std::cout << "A" << std::endl;
	else if (ptr_b)
		std::cout << "B" << std::endl;
	else if (ptr_c)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	try
	{
		A	&ref_a = dynamic_cast<A &>(p);
		(void)ref_a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &bc) {}

	try
	{
		B	&ref_b = dynamic_cast<B &>(p);
		(void)ref_b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &bc) {}

	try
	{
		C	&ref_c = dynamic_cast<C &>(p);
		(void)ref_c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &bc) {}
}

int main(void)
{
	Base	*ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);

	delete ptr;

	return (0);
}
