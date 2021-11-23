/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:32:00 by agautier          #+#    #+#             */
/*   Updated: 2021/11/23 23:24:04 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice(void);
		Ice(Ice const& i);

		virtual ~Ice(void);

		AMateria* clone(void) const;
		void use(ICharacter& target) const;

		Ice& operator=(Ice const& i);
};

#endif
