/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:36:54 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 14:29:38 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain class constructor called" << std::endl;
	for (int i=0; i<100; i++)
	{
		this->_ideas[i] = "some idea";
	}
}

Brain::Brain(const Brain& ref)
{
	const std::string*	idea = ref.getIdeas();

	std::cout << "Brain class copy constructor called" << std::endl;
	for (int i=0; i<100; i++)
	{
		this->_ideas[i] = idea[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain class destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& ref)
{
	const std::string*	idea = ref.getIdeas();

	std::cout << "Brain class copy assignment operator called" << std::endl;
	for (int i=0; i<100; i++)
	{
		this->_ideas[i] = idea[i];
	}
	return (*this);
}

void	Brain::setIdeas(const std::string* ideas)
{
	for (int i=0; i<100; i++)
	{
		this->_ideas[i] = ideas[i];
	}
}

const std::string*	Brain::getIdeas(void) const
{
	return (this->_ideas);
}
