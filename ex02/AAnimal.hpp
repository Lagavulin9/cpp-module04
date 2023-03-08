/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:39:36 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:22:06 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

# include <string>
# include <iostream>

class AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(const AAnimal&);
	virtual ~AAnimal();

	AAnimal&			operator=(const AAnimal&);

	void				setType(const std::string&);
	const std::string&	getType(void) const;
	virtual void		makeSound(void) const = 0;
};

#endif
