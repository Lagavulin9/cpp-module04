/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:43:38 by marvin            #+#    #+#             */
/*   Updated: 2023/02/18 19:43:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <string>
# include <iostream>

class WrongAnimal
{
private:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	~WrongAnimal();

	WrongAnimal&		operator=(const WrongAnimal&);

	void				setType(const std::string&);
	const std::string&	getType(void) const;
	void				makeSound(void) const;
};

#endif
