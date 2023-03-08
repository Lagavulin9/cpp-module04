/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:41:23 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:20:08 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():
	_type("Abstract AAnimal")
{
	std::cout << "AAnimal class constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& ref):
	_type(ref._type)
{
	std::cout << "AAnimal class copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal class destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& ref)
{
	std::cout << "AAnimal class copy assignment operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void	AAnimal::setType(const std::string& _type)
{
	this->_type = _type;
}

const std::string&	AAnimal::getType(void) const
{
	return (this->_type);
}
