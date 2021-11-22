/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:02:38 by agautier          #+#    #+#             */
/*   Updated: 2021/11/23 00:22:51 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAMATERIA_HPP
#define AAMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria {
	public:
		AMateria(void);
		AMateria(AMateria const& m);
		AMateria(std::string const& type);

		virtual ~AMateria(void);

		std::string const& getType(void) const;
		std::string const& getType(void);

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);

		AMateria& operator=(AMateria const& m);

	protected:
		std::string type;
};

#endif

