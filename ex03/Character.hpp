/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:19:36 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 19:19:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];
public:
	Character();
	Character(const std::string&);
	Character(const Character&);
	~Character();

	Character&	operator=(const Character&);

	const std::string&	getName() const;
	void				equip(AMateria *);
	void				unequip(int);
	void				use(int, ICharacter&);
};

#endif
