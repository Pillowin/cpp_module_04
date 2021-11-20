/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:32:13 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 15:55:54 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

/*
**	Default constructor.
*/
AAnimal::AAnimal(std::string const& type) : type(type) {
	std::cout << "AAnimal default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
AAnimal::AAnimal(AAnimal const& a) {
	*this = a;
	std::cout << "AAnimal copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
AAnimal::~AAnimal(void) {
	std::cout << "AAnimal Destructor called." << std::endl;
}

/*
**	Getter for type.
*/
std::string const& AAnimal::getType(void) const { return (type); }

/*
**	Assignment operator.
*/
AAnimal& AAnimal::operator=(AAnimal const& a) {
	if (this == &a)
		return (*this);
	type = a.type;
	std::cout << "AAnimal assignment operator called." << std::endl;
	return (*this);
}

