/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:41:02 by agautier          #+#    #+#             */
/*   Updated: 2021/12/04 18:51:05 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
Cat::Cat(Cat const& c) : Animal("Cat") {
	*this = c;
	std::cout << "Cat copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
Cat::~Cat(void) { std::cout << "Cat Destructor called." << std::endl; }

/*
**	Makes the cat sound.
*/
std::string const Cat::makeSound(void) const { return ("Meow"); }

/*
**	Assignment operator.
*/
Cat& Cat::operator=(Cat const&) {
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

