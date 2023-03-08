/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:16:13 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:24:00 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(const Dog&);
	~Dog();

	Dog&				operator=(const Dog&);
	void				makeSound(void) const;
	const std::string	getIdea(int) const;
};

#endif
