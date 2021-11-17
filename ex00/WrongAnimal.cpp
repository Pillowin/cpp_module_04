/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:32:13 by agautier          #+#    #+#             */
/*   Updated: 2021/11/17 15:36:23 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/*
**	Default constructor.
*/
WrongAnimal::WrongAnimal(std::string const& type) : type(type) {
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
WrongAnimal::WrongAnimal(WrongAnimal const& wa) {
	*this = wa;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

/*
**	Getter for type.
*/
std::string const& WrongAnimal::getType(void) const { return (type); }

/*
**	Makes the animal sound.
*/
std::string const WrongAnimal::makeSound(void) const {
	return ("*random wrong animal sound*");
}

/*
**	Assignment operator.
*/
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& wa) {
	if (this == &wa)
		return (*this);
	type = wa.type;
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	return (*this);
}

