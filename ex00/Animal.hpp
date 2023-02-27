/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:39:36 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 18:39:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <string>
# include <iostream>

class Animal
{
private:
	std::string	_type;
public:
	Animal();
	Animal(const Animal&);
	virtual ~Animal();

	Animal&				operator=(const Animal&);

	void				setType(const std::string&);
	const std::string&	getType(void) const;
	virtual void		makeSound(void) const;
};

#endif
