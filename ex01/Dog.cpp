/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:15:59 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:14:52 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog class constructor called" << std::endl;
	this->_type = "Dog";
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
	this->_type = ref._type;
	delete this->_brain;
	this->_brain = new Brain(*ref._brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}

const std::string	Dog::getIdea(int index) const
{
	if (index < 0 || 100 <= index)
		return ("index out of range");
	const std::string *ideas = this->_brain->getIdeas();
	return (ideas[index]);
}
