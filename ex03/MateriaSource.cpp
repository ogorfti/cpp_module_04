/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:04:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 20:18:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*-------------------- Orthodox --------------------*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource &other)
{
	(void)other;
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	return (*this);
}

MateriaSource::MateriaSource(MateriaSource &other)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
	std::cout << "MateriaSource Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
		{
			this->materias[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	if (!type.compare("ice"))
		return (new Ice);
	else if (!type.compare("cure"))
		return (new Cure);
	return (NULL);
}