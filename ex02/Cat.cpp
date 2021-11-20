/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:41:02 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 15:53:07 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain()) {
	std::cout << "Cat default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
Cat::Cat(Cat const& c) {
	*this = c;
	std::cout << "Cat copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
Cat::~Cat(void) {
	delete _brain;
	std::cout << "Cat Destructor called." << std::endl;
}

/*
**	Makes the cat sound.
*/
std::string const Cat::makeSound(void) const { return ("Meow"); }

/*
**	Getter for _brain.
*/
Brain* Cat::getBrain(void) const { return (_brain); }

/*
**	Assignment operator.
*/
Cat& Cat::operator=(Cat const& c) {
	if (this == &c)
		return (*this);
	_brain = new Brain(*c._brain);
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

