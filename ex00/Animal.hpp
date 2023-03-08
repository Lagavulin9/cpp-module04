/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:39:36 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 13:59:14 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <string>
# include <iostream>

class Animal
{
protected:
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
