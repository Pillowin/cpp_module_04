/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:31:19 by agautier          #+#    #+#             */
/*   Updated: 2021/11/24 18:43:19 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <cstdlib>

// TODO: While assigning a Materia to another, copying the type doesn’t make
// sense...
// TODO: deep copy of Character inventory

int main(void) {
	MateriaSource* src1 = new MateriaSource();
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	src1->printSource();

	std::cout << std::endl;

	MateriaSource* src2 = new MateriaSource();
	*src2				= *src1;
	src2->printSource();

	std::cout << std::endl;

	Character* me  = new Character("me");
	Character* you = new Character();

	AMateria* tmp1;
	tmp1 = src2->createMateria("ice");
	me->equip(tmp1);

	AMateria* tmp2;
	tmp2 = src1->createMateria("cure");
	me->equip(tmp2);
	me->printInventory();
	std::cout << std::endl;

	*you = *me;
	you->printInventory();
	std::cout << std::endl;

	Character* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	you->use(0, *bob);
	you->use(1, *bob);

	me->unequip(0);

	delete tmp1; // Needed because materia has been unequiped.
	delete bob;
	delete me;
	delete you;
	delete src1;
	delete src2;
	return (EXIT_SUCCESS);
}
