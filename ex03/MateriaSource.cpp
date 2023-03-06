/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:43:03 by marvin            #+#    #+#             */
/*   Updated: 2023/03/04 02:43:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	_count(0)
{
	for (int i=0; i<4; i++)
	{
		this->_materia[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource& ref):
	_count(ref._count)
{
	for (int i=0; i<4; i++)
	{
		this->_materia[i] = ref._materia[i];
	}
}

MateriaSource::~MateriaSource()
{
	for (int i=0; i<4; i++)
	{
		delete this->_materia[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ref)
{
	this->_count = ref._count;
	for (int i=0; i<4; i++)
	{
		this->_materia[i] = ref._materia[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *mat)
{
	if (4 <= this->_count)
		return ;
	this->_materia[this->_count++] = mat;
}

AMateria*	MateriaSource::createMateria(const std::string&	type)
{
	for (int i=0; i<this->_count; i++)
	{
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (0);
}
