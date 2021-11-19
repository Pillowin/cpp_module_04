/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:41:02 by agautier          #+#    #+#             */
/*   Updated: 2021/11/19 16:48:15 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Dog::Dog(void) : Animal("Dog"), _brain(new Brain()) {
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
Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog Destructor called." << std::endl;
}

/*
**	Makes the dog sound.
*/
std::string const Dog::makeSound(void) const { return ("Woof"); }

/*
**	Getter for _brain.
*/
Brain* Dog::getBrain(void) const { return (_brain); }

/*
**	Assignment operator.
*/
Dog& Dog::operator=(Dog const& d) {
	if (this == &d)
		return (*this);
	_brain = new Brain(*d._brain);
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

