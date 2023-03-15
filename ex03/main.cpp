/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:53:39 by marvin            #+#    #+#             */
/*   Updated: 2023/03/15 17:12:12 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* floor[1024];
	for (int i=0; i<1024; i++)
		floor[i] = 0;
	floor[0] = src->createMateria("ice");
	floor[1] = src->createMateria("cure");
	me->equip(floor[0]);
	me->equip(floor[1]);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	bob->equip(floor[0]);
	bob->use(0, *me);

	std::cout << "me unequip ice\n";
	me->unequip(0);
	bob->equip(floor[0]);
	bob->use(0, *me);

	delete bob;
	delete me;
	delete src;

	return 0;
}
