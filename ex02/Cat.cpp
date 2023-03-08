/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:34:13 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:23:02 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat class constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& ref):
	AAnimal(ref)
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
	this->_type = ref._type;
	delete this->_brain;
	this->_brain = new Brain(*ref._brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

const std::string	Cat::getIdea(int index) const
{
	if (index < 0 || 100 <= index)
		return ("index out of range");
	const std::string *ideas = this->_brain->getIdeas();
	return (ideas[index]);
}
