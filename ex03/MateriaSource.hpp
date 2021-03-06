/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:13:52 by agautier          #+#    #+#             */
/*   Updated: 2021/11/29 23:57:08 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

#define MAX_SOURCE 4

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& m);

		virtual ~MateriaSource(void);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const& type);
		void printSource(void) const;

		MateriaSource& operator=(MateriaSource const& m);

	private:
		AMateria* _source[MAX_SOURCE];
};

#endif
