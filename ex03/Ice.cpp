/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:22:28 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 20:22:28 by marvin           ###   ########.fr       */
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
	AMateria(ref.getType())
{
	this->_xp = ref.getXP();
	this->_equipped = ref.getEquipped();
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
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
