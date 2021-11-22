/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:32:28 by agautier          #+#    #+#             */
/*   Updated: 2021/11/22 23:47:50 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Cure::Cure(void) : AMateria("cure") {}

/*
**	Copy constructor.
*/
Cure::Cure(Cure const& c) : AMateria(c) { *this = c; }

/*
**	Destructor.
*/
Cure::~Cure(void) {}

/*
**	Returns a new instance of the real Materia's type.
*/
AMateria* Cure::clone(void) const { return new Cure(); }

/*
**	Apply materia effect to target.
*/
void Cure::use(ICharacter& target) const {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
/*
**	Assignment operator.
*/
Cure& Cure::operator=(Cure const& c) {
	if (this == &c)
		return (*this);
	AMateria::operator=(c);
	return (*this);
}

