/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:47:37 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 18:29:28 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*-------------------- Orthodox --------------------*/

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Ice Copy assignment operator called" << std::endl;
	return (*this);
}

Ice::Ice(const Ice &other)
{
	*this = other;
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

const std::string& Ice::getType() const
{
	return (this->type);
}

Ice* Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
