/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:20:32 by marvin            #+#    #+#             */
/*   Updated: 2023/03/15 16:16:27 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():
	_type(""),
	_equipped(false)
{
}

AMateria::AMateria(std::string const& type):
	_type(type),
	_equipped(false)
{
}

AMateria::AMateria(const AMateria& ref):
	_type(ref.getType()),
	_equipped(ref.getEquipped())
{
}

AMateria::~AMateria()
{
}

AMateria&	AMateria::operator=(const AMateria& ref)
{
	this->_type = ref.getType();
	this->_equipped = ref.getEquipped();
	return (*this);
}

const std::string&	AMateria::getType(void) const
{
	return (this->_type);
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
}
