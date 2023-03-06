/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:20:32 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 11:20:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():
	_type(""),
	_xp(0),
	_equipped(false)
{
}

AMateria::AMateria(std::string const& type):
	_type(type),
	_xp(0),
	_equipped(false)
{
}

AMateria::AMateria(const AMateria& ref):
	_type(ref.getType()),
	_xp(ref.getXP()),
	_equipped(ref.getEquipped())
{
}

AMateria::~AMateria()
{
}

AMateria&	AMateria::operator=(const AMateria& ref)
{
	this->_type = ref.getType();
	this->_xp = ref.getXP();
	this->_equipped = ref.getEquipped();
	return (*this);
}

const std::string&	AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int		AMateria::getXP(void) const
{
	return (this->_xp);
}

bool				AMateria::getEquipped(void) const
{
	return (this->_equipped);
}

void				AMateria::setEquipped(bool equipped)
{
	this->_equipped = equipped;
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
