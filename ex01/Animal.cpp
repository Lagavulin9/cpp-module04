/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:41:23 by marvin            #+#    #+#             */
/*   Updated: 2023/03/14 19:08:25 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():
	_type("Abstract Animal")
{
	std::cout << "Animal class constructor called" << std::endl;
}

Animal::Animal(const Animal& ref):
	_type(ref._type)
{
	std::cout << "Animal class copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& ref)
{
	std::cout << "Animal class copy assignment operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void	Animal::setType(const std::string& type)
{
	this->_type = type;
}

const std::string&	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Some animal noise" << std::endl;
}

