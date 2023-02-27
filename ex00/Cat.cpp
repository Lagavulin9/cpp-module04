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
}

Cat::Cat(const Cat& ref):
	Animal(ref)
{
	std::cout << "Cat class copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat class destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& ref)
{
	std::cout << "Cat class copy assignment operator called" << std::endl;
	this->setType(ref.getType());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
