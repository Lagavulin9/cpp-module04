/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:16:13 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:24:02 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
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
