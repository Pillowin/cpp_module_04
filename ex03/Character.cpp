/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:16:13 by agautier          #+#    #+#             */
/*   Updated: 2021/11/29 23:52:48 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**	Default constructor.
*/
Character::Character(void) : _name("Unnamed"), _slot(0) {}

/*
**	Copy constructor.
*/
Character::Character(Character const& c) { *this = c; }

/*
**	Parametric constructor.
*/
Character::Character(std::string const& name) : _name(name), _slot(0) {}

/*
**	Destructor.
*/
Character::~Character(void) {
	for (unsigned char i = 0; i < _slot; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
}

/*
**	Getter for name.
*/
std::string const& Character::getName(void) const { return (_name); }

/*
**	Equips the Materia at _slot of _inventory.
*/
void Character::equip(AMateria* m) {
	if (_slot >= INVENTORY_SIZE)
		return;
	_inventory[_slot] = m;
	_slot += 1;
}

/*
**	Unequips the Materia at idx of _inventory without deleting it.
*/
void Character::unequip(int idx) {
	if (idx >= _slot || idx < 0)
		return;
	_inventory[idx] = NULL;
	if (idx == _slot)
		_slot -= 1;
}

/*
**	Use Materia on target, at the idx slot of the _inventory.
*/
void Character::use(int idx, ICharacter& target) {
	if (idx >= _slot || idx < 0 || !_inventory[idx])
		return;
	_inventory[idx]->use(target);
}

/*
**	Print character inventory.
*/
void Character::printInventory(void) const {
	std::cout << "Inventory addr = " << _inventory << std::endl;
	for (unsigned char i = 0; i < _slot; i++) {
		if (_inventory[i])
			std::cout << "[" << (unsigned int)i << "] " << _inventory[i] << " "
					  << _inventory[i]->getType() << std::endl;
		else
			std::cout << "[" << (unsigned int)i << "] " << _inventory[i]
					  << std::endl;
	}
}

/*
**	Assignment operator.
*/
Character& Character::operator=(Character const& c) {
	if (this == &c)
		return (*this);
	_name = c._name;
	for (unsigned char i = 0; i < _slot; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
	_slot = c._slot;
	for (unsigned char i = 0; i < _slot; i++)
		_inventory[i] = c._inventory[i]->clone();
	return (*this);
}
