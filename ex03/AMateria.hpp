/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:19:32 by marvin            #+#    #+#             */
/*   Updated: 2023/03/15 15:46:19 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string			_type;
	bool				_equipped;
private:

public:
	AMateria();
	AMateria(std::string const&);
	AMateria(const AMateria&);
	virtual ~AMateria();

	AMateria&			operator=(const AMateria&);

	std::string const&	getType(void) const;
	bool				getEquipped(void) const;
	void				setEquipped(bool);
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
