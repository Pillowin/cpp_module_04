/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:02:39 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 16:06:30 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
**	Default constructor.
*/
AMateria::AMateria(void) {}

/*
**	Copy constructor.
*/
AMateria::AMateria(AMateria const& sample) { *this = sample; }

/*
**	Destructor.
*/
AMateria::~AMateria(void) {}

/*
**	Assignment operator.
*/
AMateria& AMateria::operator=(AMateria const& sample) {
	if (this == &sample)
		return (*this);
	return (*this);
}

