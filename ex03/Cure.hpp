/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:40:28 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 19:40:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"
# include "Character.hpp"
# include <iostream>

class Cure : public AMateria
{
private:

public:
	Cure();
	Cure(const std::string&);
	Cure(const Cure&);
	~Cure();

	Cure&	operator=(const Cure&);

	AMateria	*clone(void) const;
	void		use(ICharacter&);
};

#endif
