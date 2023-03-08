/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:34:51 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:18:29 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Dog*	doggo = new Dog();
	const Dog*	shibe = new Dog(*doggo);

	std::cout << doggo->getIdea(0) << std::endl;
	delete(doggo);
	std::cout << shibe->getIdea(0) << std::endl;
	delete(shibe);
	std::cout << "\n\n";

	Animal	*animals[4];
	for (int i=0; i<4; i++)
	{
		if (i%2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << "\n\n";

	for (int i=0; i<4; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	return (0);
}
