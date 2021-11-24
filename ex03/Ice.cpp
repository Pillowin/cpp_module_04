/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:32:01 by agautier          #+#    #+#             */
/*   Updated: 2021/11/24 15:54:16 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Ice::Ice(void) : AMateria("ice") {}

/*
**	Copy constructor.
*/
Ice::Ice(Ice const& i) : AMateria(i) { *this = i; }

/*
**	Destructor.
*/
Ice::~Ice(void) {}

/*
**	Returns a new instance of the real Materia's type.
*/
// TODO: risque LEAKS ?
AMateria* Ice::clone(void) const { return (new Ice(*this)); }

/*
**	Apply materia effect to target.
*/
void Ice::use(ICharacter& target) const {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}

/*
**	Assignment operator.
*/
// TODO: copie type ?
Ice& Ice::operator=(Ice const& i) {
	if (this == &i)
		return (*this);
	AMateria::operator=(i);
	return (*this);
}
