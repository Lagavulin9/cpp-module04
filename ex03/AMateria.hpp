/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:19:32 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 11:19:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:

private:
	
public:
	AMateria();
	AMateria(std::string const&);
	~AMateria();

	std::string const&	getType(void) const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
