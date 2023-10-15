/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:47:37 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 12:38:41 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*-------------------- Orthodox --------------------*/

Cure::Cure()
{
	this->type = "cure";
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Cure Copy assignment operator called" << std::endl;
	return (*this);
}

Cure::Cure(const Cure &other)
{
	*this = other;
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

const std::string& Cure::getType() const
{
	return (this->type);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << char(39) << "s wounds *"<< std::endl;
}