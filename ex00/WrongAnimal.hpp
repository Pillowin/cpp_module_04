/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:32:10 by agautier          #+#    #+#             */
/*   Updated: 2021/11/17 15:36:02 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal {
	public:
		WrongAnimal(std::string const& type = "WrongAnimal");
		WrongAnimal(WrongAnimal const& wa);

		virtual ~WrongAnimal(void);

		std::string const makeSound(void) const;

		std::string const& getType(void) const;

		WrongAnimal& operator=(WrongAnimal const& wa);

	protected:
		std::string type;
};

#endif

