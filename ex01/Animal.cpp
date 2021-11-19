/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:32:13 by agautier          #+#    #+#             */
/*   Updated: 2021/11/17 15:17:02 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Animal::Animal(std::string const& type) : type(type) {
	std::cout << "Animal default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
Animal::Animal(Animal const& a) {
	*this = a;
	std::cout << "Animal copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
Animal::~Animal(void) { std::cout << "Animal Destructor called." << std::endl; }

/*
**	Getter for type.
*/
std::string const& Animal::getType(void) const { return (type); }

/*
**	Makes the animal sound.
*/
std::string const Animal::makeSound(void) const {
	return ("*random animal sound*");
}

/*
**	Assignment operator.
*/
Animal& Animal::operator=(Animal const& a) {
	if (this == &a)
		return (*this);
	type = a.type;
	std::cout << "Animal assignment operator called." << std::endl;
	return (*this);
}

