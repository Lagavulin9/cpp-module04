/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:53:32 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 19:53:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FLOOR_HPP__
# define __FLOOR_HPP__

# include "AMateria.hpp"

class Floor {
private:
	AMateria	*_materia[1024];
	int			_count;
public:
	Floor();
	Floor(const Floor&);
	~Floor();

	Floor&		operator=(const Floor&);

	AMateria	*getMateria(int) const;
	void		addMateria(AMateria *);
};

#endif
