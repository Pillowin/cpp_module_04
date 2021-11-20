/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:31:19 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 16:00:20 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	// Following line cannot be instantiate because AAnimal is abstract
	//	const AAnimal* k = new AAnimal();
	// delete k;

	delete j; // should not create a leak
	delete i;

	std::cout << std::endl
			  << "---------------------Now testing with an array" << std::endl
			  << std::endl;

	const AAnimal* animals[10];

	for (unsigned char i = 0; i < 10; i++)
		i < 10 / 2 ? animals[i] = new Dog : animals[i] = new Cat;

	std::cout << std::endl;

	for (unsigned char i = 0; i < 10; i++)
		delete animals[i];

	std::cout << std::endl
			  << "---------------------Now testing if copy is deep" << std::endl
			  << std::endl;

	const Dog dog1;

	std::cout << std::endl << "Brain addr of dog1 is " << dog1.getBrain();
	dog1.getBrain()->setIdea("I am an happy dog. :)");
	dog1.getBrain()->setIdea("My favorite meal is cat and croquettes.");
	dog1.getBrain()->setIdea("I make Woooof sound.");
	std::cout << std::endl << "dog1 ideas:" << std::endl;
	dog1.getBrain()->printIdeas();
	std::cout << std::endl;

	const Dog dog2 = dog1;
	std::cout << std::endl << "Brain addr of dog2 is " << dog2.getBrain();
	std::cout << std::endl << "dog2 ideas:" << std::endl;
	dog2.getBrain()->printIdeas();

	dog1.getBrain()->setIdea("My name is dog1.");
	dog1.getBrain()->setIdea("I am a labrador.");

	dog2.getBrain()->setIdea("My name is dog2.");
	dog2.getBrain()->setIdea("I am a dalmatian.");

	std::cout << std::endl << "dog1 ideas:" << std::endl;
	dog1.getBrain()->printIdeas();

	std::cout << std::endl << "dog2 ideas:" << std::endl;
	dog2.getBrain()->printIdeas();
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
