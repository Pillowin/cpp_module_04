/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:07:00 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 21:44:43 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter(void);

		virtual void equip(AMateria* m)				  = 0;
		virtual void unequip(int idx)				  = 0;
		virtual void use(int idx, ICharacter& target) = 0;

		virtual std::string const& getNAme() const = 0;
};

#endif

