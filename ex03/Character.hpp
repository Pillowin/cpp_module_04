/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:16:09 by agautier          #+#    #+#             */
/*   Updated: 2021/11/22 23:54:58 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

#define INVENTORY_SIZE 4

class Character: public ICharacter {
	public:
		Character(void);
		Character(Character const& c);
		Character(std::string const& name);

		virtual ~Character(void);

		std::string const& getName(void) const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character& operator=(Character const& c);

	private:
		std::string _name;
		AMateria* _inventory[INVENTORY_SIZE];
		unsigned char _slot;
};

#endif

