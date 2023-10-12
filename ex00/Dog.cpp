/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:21 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/12 14:56:01 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-------------------- Orthodox --------------------*/

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog& Dog::operator=(Dog &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void	Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}