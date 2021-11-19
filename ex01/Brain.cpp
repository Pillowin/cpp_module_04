/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:01:26 by agautier          #+#    #+#             */
/*   Updated: 2021/11/19 17:26:31 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Brain::Brain(void) : _nb_idea(0) {
	for (unsigned char i = 0; i < NB_IDEA; i++)
		ideas[i] = "";
	std::cout << "Brain default constructor called." << std::endl;
}

/*
**	Copy constructor.
*/
Brain::Brain(Brain const& b) {
	*this = b;
	std::cout << "Brain copy constructor called." << std::endl;
}

/*
**	Destructor.
*/
Brain::~Brain(void) { std::cout << "Brain destructor called." << std::endl; }

/*
**	Print all filled ideas.
*/
void Brain::printIdeas(void) const {
	for (unsigned char i = 0; i < _nb_idea; i++)
		std::cout << "[" << (unsigned int)i << "] " << ideas[i] << std::endl;
}

/*
**	Setter for idea.
*/
void Brain::setIdea(std::string const& idea) {
	ideas[_nb_idea] = idea;
	_nb_idea += 1;
}

/*
**	Assignment operator.
*/
Brain& Brain::operator=(Brain const& b) {
	if (this == &b)
		return (*this);
	_nb_idea = b._nb_idea;
	for (unsigned char i = 0; i < _nb_idea; i++)
		ideas[i] = b.ideas[i];
	std::cout << "Brain assignment operator called." << std::endl;
	return (*this);
}

