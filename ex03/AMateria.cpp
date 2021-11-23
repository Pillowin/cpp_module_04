/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:02:39 by agautier          #+#    #+#             */
/*   Updated: 2021/11/23 01:02:50 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>

/*
**	Default constructor.
*/
AMateria::AMateria(void) : type("Unknow") {}

/*
**	Copy constructor.
*/
AMateria::AMateria(AMateria const& m) { *this = m; }

/*
**	Parametric constructor.
*/
AMateria::AMateria(std::string const& type) : type(type) {}

/*
**	Destructor.
*/
AMateria::~AMateria(void) {}

/*
**	Getter for materia type.
*/
std::string const& AMateria::getType(void) const { return type; }

/*
**
*/
void AMateria::use(ICharacter& target) {
	// TODO: ?
}

/*
**	Assignment operator.
*/
AMateria& AMateria::operator=(AMateria const& m) {
	if (this == &m)
		return (*this);
	type = m.type;
	return (*this);
}

