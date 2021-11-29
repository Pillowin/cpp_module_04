/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:32:25 by agautier          #+#    #+#             */
/*   Updated: 2021/11/29 23:57:31 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure(void);
		Cure(Cure const& c);

		virtual ~Cure(void);

		AMateria* clone(void) const;
		void use(ICharacter& target) const;

		Cure& operator=(Cure const& c);
};

#endif
