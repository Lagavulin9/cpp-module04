/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:34:13 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 19:34:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat class constructor called" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(const Cat& ref):
	Animal(ref)
{
	std::cout << "Cat class copy constructor called" << std::endl;
	this->_brain = new Brain(*ref._brain);
}

Cat::~Cat()
{
	std::cout << "Cat class destructor called" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(const Cat& ref)
{
	std::cout << "Cat class copy assignment operator called" << std::endl;
	this->setType(ref.getType());
	delete this->_brain;
	this->_brain = new Brain(*ref._brain);
	return (*this);
}


void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
