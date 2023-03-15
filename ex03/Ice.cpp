/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:22:28 by marvin            #+#    #+#             */
/*   Updated: 2023/03/15 16:19:44 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(const std::string& type):
	AMateria(type)
{
}

Ice::Ice(const Ice& ref):
	AMateria(ref._type)
{
	this->_equipped = ref._equipped;
}

Ice::~Ice()
{
}

Ice&	Ice::operator=(const Ice& ref)
{
	new	(this)(Ice)(ref);
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
