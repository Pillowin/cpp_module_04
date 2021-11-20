/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:32:10 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 15:54:53 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
	public:
		AAnimal(std::string const& type = "Animal");
		AAnimal(AAnimal const& a);

		virtual ~AAnimal(void);

		virtual std::string const makeSound(void) const = 0;

		std::string const& getType(void) const;

		AAnimal& operator=(AAnimal const& a);

	protected:
		std::string type;
};

#endif

