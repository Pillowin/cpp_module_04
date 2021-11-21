/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:41:02 by agautier          #+#    #+#             */
/*   Updated: 2021/11/21 23:42:13 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Cat::Cat(void) : Animal("Cat"), _brain(new Brain()) {
	std::cout << "Cat default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
Cat::Cat(Cat const& c) : Animal("Cat"), _brain(new Brain()) {
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

	Animal::operator=(c);

	*_brain = *c._brain;
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

