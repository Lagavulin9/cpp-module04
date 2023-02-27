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
	this->_brain = new Brain();
}

Dog::Dog(const Dog& ref):
	Animal(ref)
{
	std::cout << "Dog class copy constructor called" << std::endl;
	this->_brain = new Brain(*ref._brain);
}

Dog::~Dog()
{
	std::cout << "Dog class destructor called" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(const Dog& ref)
{
	std::cout << "Dog class copy assignment operator called" << std::endl;
	this->setType(ref.getType());
	delete this->_brain;
	this->_brain = new Brain(*ref._brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}
