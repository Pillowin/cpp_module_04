/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:40:44 by agautier          #+#    #+#             */
/*   Updated: 2021/11/17 15:37:36 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(Cat const& c);

		virtual ~Cat(void);

		virtual std::string const makeSound(void) const;

		Cat& operator=(Cat const&);
};

#endif

