/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:34:13 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 19:34:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat class constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ref):
	WrongAnimal(ref)
{
	std::cout << "WrongCat class copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& ref)
{
	std::cout << "WrongCat class copy assignment operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
