/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:31:19 by agautier          #+#    #+#             */
/*   Updated: 2021/11/17 15:43:51 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
	const Animal* animal = new Animal();
	const Animal* dog	 = new Dog();
	const Animal* cat	 = new Cat();

	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat	= new WrongCat();

	std::cout << std::endl;

	std::cout << "animal is a " << animal->getType() << std::endl;
	std::cout << "dog is a " << dog->getType() << std::endl;
	std::cout << "cat is a " << cat->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "animal is saying " << animal->makeSound() << "." << std::endl;
	std::cout << "dog is saying " << dog->makeSound() << "." << std::endl;
	std::cout << "cat is saying " << cat->makeSound() << "." << std::endl;

	std::cout << std::endl;

	std::cout << "wrong animal is a " << wrong_animal->getType() << std::endl;
	std::cout << "wrong cat is a " << wrong_cat->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "wrong animal is saying " << wrong_animal->makeSound() << "."
			  << std::endl;
	std::cout << "wrong cat is saying " << wrong_cat->makeSound() << "."
			  << std::endl;

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;
	delete wrong_animal;
	delete wrong_cat;
	return (EXIT_SUCCESS);
}
