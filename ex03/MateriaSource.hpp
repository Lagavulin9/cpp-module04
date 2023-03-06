/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:49:08 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 19:49:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_materia[4];
	int			_count;
public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	~MateriaSource();

	MateriaSource&	operator=(const MateriaSource&);
	
	void		learnMateria(AMateria *);
	AMateria	*createMateria(std::string const& type);
};

#endif
