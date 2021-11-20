/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:40:44 by agautier          #+#    #+#             */
/*   Updated: 2021/11/20 15:53:17 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
	public:
		Cat(void);
		Cat(Cat const& c);

		virtual ~Cat(void);

		virtual std::string const makeSound(void) const;

		Brain* getBrain(void) const;

		Cat& operator=(Cat const& c);

	private:
		Brain* _brain;
};

#endif

