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
	AMateria(ref.getType())
{
	this->_xp = ref.getXP();
	this->_equipped = ref.getEquipped();
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
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	this->_xp += 10;
}
