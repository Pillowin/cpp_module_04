/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:13:47 by agautier          #+#    #+#             */
/*   Updated: 2021/11/24 18:18:33 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
**	Default constructor.
*/
MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource default constructor" << std::endl;
	for (unsigned char i = 0; i < MAX_SOURCE; i++)
		_source[i] = NULL;
}

/*
**	Copy constructor.
*/
MateriaSource::MateriaSource(MateriaSource const& m) {
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = m;
}

/*
**	Destructor.
*/
MateriaSource::~MateriaSource(void) {
	for (unsigned char i = 0; i < MAX_SOURCE && _source[i]; i++)
		delete _source[i];
}

/*
**	Copy Materia passed as parameter and store it in memory to be cloned later.
*/
// TODO: Un seul pointeur ou copie ?
void MateriaSource::learnMateria(AMateria* m) {
	unsigned char i;

	for (i = 0; i < MAX_SOURCE && _source[i]; i++)
		;
	if (i >= MAX_SOURCE)
		return;
	_source[i] = m;
}

/*
**	Returns a new Materia, which will me a copy of the type Materia.
*/
AMateria* MateriaSource::createMateria(std::string const& type) {
	unsigned char i;
	for (i = 0; i < MAX_SOURCE; i++) {
		if (_source[i] && _source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (NULL);
}

/*
**	Prints source.
*/
void MateriaSource::printSource(void) const {
	std::cout << "Source addr = " << _source << std::endl;
	for (unsigned char i = 0; i < MAX_SOURCE && _source[i]; i++)
		std::cout << "[" << (unsigned int)i << "] " << _source[i] << " "
				  << _source[i]->getType() << std::endl;
}

/*
**	Assignment operator.
*/
// TODO: Deep copie
MateriaSource& MateriaSource::operator=(MateriaSource const& m) {
	std::cout << "MateriaSource assign" << std::endl;
	if (this == &m)
		return (*this);
	for (unsigned char i = 0; i < MAX_SOURCE && _source[i]; i++)
		delete _source[i];
	for (unsigned char i = 0; i < MAX_SOURCE; i++)
		if (m._source[i])
			_source[i] = m._source[i]->clone();
	return (*this);
}

