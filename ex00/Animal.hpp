/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:32:10 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 22:05:04 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
	public:
		Animal(std::string const& type = "Animal");
		Animal(Animal const& a);

		virtual ~Animal(void);

		virtual std::string const makeSound(void) const;

		std::string const& getType(void) const;

		Animal& operator=(Animal const& a);

	protected:
		std::string type;
};

#endif

