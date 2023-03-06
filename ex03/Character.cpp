/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:06:34 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 20:06:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void):
	_name("Default_name")
{
	for (int i=0; i<4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(const std::string& name):
	_name(name)
{
	for (int i=0; i<4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(const Character& ref):
	_name(ref._name)
{
	for (int i=0; i<4; i++)
	{
		this->_inventory[i] = ref._inventory[i];
	}
}

Character::~Character(void)
{
	for (int i=0; i<4; i++)
	{
		delete this->_inventory[i];
	}
}

Character& Character::operator=(const Character& ref)
{
	this->_name = ref._name;
	for (int i=0; i<4; i++)
	{
		this->_inventory[i] = ref._inventory[i];
	}
	return (*this);
}

const std::string&	Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *mat)
{
	if (!mat || mat->getEquipped())
		return ;
	for (int i=0; i<4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = mat;
			mat->setEquipped(true);
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (!(0 <= idx && idx < 4) || this->_inventory[idx] == 0)
		return ;
	this->_inventory[idx]->setEquipped(false);
	this->_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (!(0 <= idx && idx < 4) || this->_inventory[idx] == 0)
		return ;
	this->_inventory[idx]->use(target);
}
