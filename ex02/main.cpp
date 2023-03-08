/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:34:51 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 19:27:17 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Dog*	doggo = new Dog();
	const Cat*	kitty = new Cat();

	doggo->makeSound();
	kitty->makeSound();
	delete(doggo);
	delete(kitty);
	return (0);
}
