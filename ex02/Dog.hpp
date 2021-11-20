/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:40:44 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 15:52:41 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
	public:
		Dog(void);
		Dog(Dog const& d);

		virtual ~Dog(void);

		virtual std::string const makeSound(void) const;

		Brain* getBrain(void) const;

		Dog& operator=(Dog const& d);

	private:
		Brain* _brain;
};

#endif

