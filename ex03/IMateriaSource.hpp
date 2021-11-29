/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:43:15 by agautier          #+#    #+#             */
/*   Updated: 2021/11/29 23:57:12 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
#define IMATERIA_SOURCE_HPP

#include "AMateria.hpp"
#include <string>

class IMateriaSource {
	public:
		virtual ~IMateriaSource(void) {}

		virtual void learnMateria(AMateria* m)					 = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
