/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:40:44 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 22:04:13 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(Dog const& d);

		virtual ~Dog(void);

		std::string const makeSound(void) const;

		Dog& operator=(Dog const&);
};

#endif

