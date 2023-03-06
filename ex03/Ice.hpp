/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:40:32 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 19:40:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"
# include "Character.hpp"
# include <iostream>

class Ice : public AMateria
{
private:

public:
	Ice();
	Ice(const std::string&);
	Ice(const Ice&);
	~Ice();

	Ice&		operator=(const Ice&);

	AMateria	*clone(void) const;
	void		use(ICharacter&);
};

#endif
