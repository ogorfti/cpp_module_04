/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:47:28 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 16:07:22 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*-------------------- Orthodox --------------------*/

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	return (*this);
}

AMateria::AMateria(AMateria &other)
{
	*this = other;
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

const std::string& AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	// target.getName();
}