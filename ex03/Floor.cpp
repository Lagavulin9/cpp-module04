/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:34:04 by marvin            #+#    #+#             */
/*   Updated: 2023/03/04 02:34:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor():
	_count(0)
{
	for (int i=0; i<1024; i++)
	{
		this->_materia[i] = 0;
	}
}

Floor::Floor(const Floor& ref):
	_count(ref._count)
{
	for (int i=0; i<1024; i++)
	{
		this->_materia[i] = ref._materia[i];
	}
}

Floor::~Floor()
{
	for (int i=0; i<1024; i++)
	{
		if (this->_materia[i]->getEquipped() == false)
			delete this->_materia[i];
	}
}

Floor&	Floor::operator=(const Floor& ref)
{
	this->_count = ref._count;
	for (int i=0; i<1024; i++)
	{
		this->_materia[i] = ref._materia[i];
	}
	return (*this);
}

AMateria*	Floor::getMateria(int idx) const
{
	if (!(0 <= idx &&  idx < this->_count))
		return (0);
	return (this->_materia[idx]);
}

void	Floor::addMateria(AMateria *mat)
{
	if (this->_count > 1023)
		return ;
	this->_materia[this->_count++] = mat;
}
