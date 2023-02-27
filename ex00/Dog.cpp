/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:15:59 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 19:15:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog class constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog& ref):
	Animal(ref)
{
	std::cout << "Dog class copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog class destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& ref)
{
	std::cout << "Dog class copy assignment operator called" << std::endl;
	this->setType(ref.getType());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}
