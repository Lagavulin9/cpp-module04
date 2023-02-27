/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:57:45 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 11:57:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

#include "AMateria.hpp"

class IMateriaSource
{
private:
	/* data */
public:
	IMateriaSource();
	virtual ~IMateriaSource();

	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const& type) = 0;
};

#endif
