/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:41:23 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 18:41:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
	_type("WrongAnimal")
{
	std::cout << "WrongAnimal class constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref):
	_type(ref._type)
{
	std::cout << "WrongAnimal class copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& ref)
{
	std::cout << "WrongAnimal class copy assignment operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void	WrongAnimal::setType(const std::string& type)
{
	this->_type = type;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Some Wronganimal noise" << std::endl;
}
