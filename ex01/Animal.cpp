/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:47:24 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/12 13:00:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*-------------------- Orthodox --------------------*/

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal& Animal::operator=(Animal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Animal Copy assignment operator called" << std::endl;
	return (*this);
}

Animal::Animal(Animal &other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void	Animal::makeSound() const
{
	std::cout << "The animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}