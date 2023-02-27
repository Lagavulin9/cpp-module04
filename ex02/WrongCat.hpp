/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:16:13 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 19:16:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:

public:
	WrongCat();
	WrongCat(const WrongCat&);
	~WrongCat();

	WrongCat&	operator=(const WrongCat&);
	void		makeSound(void) const;
};

#endif
