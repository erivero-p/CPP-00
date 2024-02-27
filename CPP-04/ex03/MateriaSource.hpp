/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:23:55 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/27 11:07:52 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria	*learnt[4];
		int			lSize;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		MateriaSource& operator=(const MateriaSource &src);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
} ;