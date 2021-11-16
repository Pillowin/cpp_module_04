/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:41:02 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 22:03:50 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
Dog::Dog(Dog const& d) {
	*this = d;
	std::cout << "Dog copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
Dog::~Dog(void) { std::cout << "Dog Destructor called." << std::endl; }

/*
**	Makes the dog sound.
*/
std::string const Dog::makeSound(void) const { return ("Woof"); }

/*
**	Assignment operator.
*/
Dog& Dog::operator=(Dog const&) {
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

