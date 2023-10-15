/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:05:02 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 20:19:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* materias[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource &other);
		MateriaSource& operator=(MateriaSource &other);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};