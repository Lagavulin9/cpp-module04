/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:22:28 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 20:22:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(const std::string& type):
	AMateria(type)
{
}

Cure::Cure(const Cure& ref):
	AMateria(ref._type)
{
	this->_equipped = ref._equipped;
}

Cure::~Cure()
{
}

Cure&	Cure::operator=(const Cure& ref)
{
	new	(this)(Cure)(ref);
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
