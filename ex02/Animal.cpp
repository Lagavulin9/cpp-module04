/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:41:23 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 18:41:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():
	_type("Abstract Animal")
{
	std::cout << "Animal class constructor called" << std::endl;
}

Animal::Animal(const Animal& ref):
	_type(ref.getType())
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
	this->_type = ref.getType();
	return (*this);
}

void	Animal::setType(const std::string& _type)
{
	this->_type = _type;
}

const std::string&	Animal::getType(void) const
{
	return (this->_type);
}
