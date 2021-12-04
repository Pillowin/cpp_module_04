/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:41:02 by agautier          #+#    #+#             */
/*   Updated: 2021/12/04 18:51:49 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

/*
**	Default constructor.
*/
WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
WrongCat::WrongCat(WrongCat const& wc) : WrongAnimal("WrongCat") {
	*this = wc;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Destructor called." << std::endl;
}

/*
**	Makes the cat sound.
*/
std::string const WrongCat::makeSound(void) const { return ("Wrong Miaou"); }

/*
**	Assignment operator.
*/
WrongCat& WrongCat::operator=(WrongCat const&) {
	std::cout << "WrongCat assignment operator called." << std::endl;
	return (*this);
}

