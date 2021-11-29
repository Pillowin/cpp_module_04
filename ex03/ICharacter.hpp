/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:07:00 by agautier          #+#    #+#             */
/*   Updated: 2021/11/29 23:57:50 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter(void) {}

		virtual std::string const& getName() const = 0;

		virtual void equip(AMateria* m)				  = 0;
		virtual void unequip(int idx)				  = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
