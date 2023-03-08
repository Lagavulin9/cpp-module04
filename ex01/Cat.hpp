/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:16:13 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 14:57:41 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat&);
	~Cat();

	Cat&				operator=(const Cat&);
	void				makeSound(void) const;
	const std::string	getIdea(int) const;
};

#endif
