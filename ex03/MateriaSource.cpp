/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:04:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/17 15:50:59 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*-------------------- Orthodox --------------------*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	this->head = NULL;
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource &other)
{
	if (this != &other)
	{
		this->head = copyList(other.head);
		for (int i = 0; i < 4; i++)
		{
			if (other.materias[i])
				this->materias[i] = other.materias[i]->clone();
			else
				this->materias[i] = NULL;
		}
	}
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
	free_list(this->head);
	for (int i = 0; i < 4; i++)
			delete materias[i];
	std::cout << "MateriaSource Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void MateriaSource::learnMateria(AMateria* m)
{
	t_list *node = newNode(m);
	addBack(&head, node);
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (0);
}