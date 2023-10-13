/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:47:24 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/13 14:52:48 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"

/*-------------------- Orthodox --------------------*/

Aanimal::Aanimal()
{
	this->type = "Aanimal";
	std::cout << "Aanimal Default constructor called" << std::endl;
}

Aanimal& Aanimal::operator=(Aanimal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Aanimal Copy assignment operator called" << std::endl;
	return (*this);
}

Aanimal::Aanimal(Aanimal &other)
{
	std::cout << "Aanimal Copy constructor called" << std::endl;
	*this = other;
}

Aanimal::~Aanimal()
{
	std::cout << "Aanimal Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

std::string Aanimal::getType() const
{
	return (this->type);
}
