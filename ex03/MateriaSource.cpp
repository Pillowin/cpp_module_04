/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:13:47 by agautier          #+#    #+#             */
/*   Updated: 2021/11/23 00:58:24 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
**	Default constructor.
*/
MateriaSource::MateriaSource(void) {}

/*
**	Copy constructor.
*/
MateriaSource::MateriaSource(MateriaSource const& m) { *this = m; }

/*
**	Destructor.
*/
MateriaSource::~MateriaSource(void) {
	for (unsigned char i = 0; i < MAX_SOURCE; i++)
		delete _source[i];
}

/*
**	Copy Materia passed as parameter and store it in memory to be cloned later.
*/
void MateriaSource::learnMateria(AMateria* m) {}

/*
**	Returns a new Materia, which will me a copy of the type Materia.
*/
AMateria* MateriaSource::createMateria(std::string const& type) {}

/*
**	Assignment operator.
*/
MateriaSource& MateriaSource::operator=(MateriaSource const& m) {
	if (this == &m)
		return (*this);
	return (*this);
}

