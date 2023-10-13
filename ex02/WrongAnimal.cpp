/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:47:24 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/12 13:52:07 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*-------------------- Orthodox --------------------*/

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void	WrongAnimal::makeSound() const
{
	std::cout << "The WrongAnimal makes a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}