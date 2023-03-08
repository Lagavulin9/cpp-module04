/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:34:13 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 14:01:15 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat class constructor called" << std::endl;
	this->_type = "Cat";
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
	this->_type = ref._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
