/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:00:02 by agautier          #+#    #+#             */
/*   Updated: 2021/11/19 17:17:56 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define NB_IDEA 100

class Brain {
	public:
		Brain(void);
		Brain(Brain const& b);

		virtual ~Brain(void);

		void setIdea(std::string const& idea);
		void printIdeas(void) const;

		Brain& operator=(Brain const& b);

	protected:
		std::string ideas[NB_IDEA];

	private:
		unsigned char _nb_idea;
};

#endif

