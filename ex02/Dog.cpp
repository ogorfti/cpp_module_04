/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:21 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/18 10:40:37 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-------------------- Orthodox --------------------*/

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog &other)
{
	this->type = other.type;
	if (other.brain)
		this->brain = new Brain(*other.brain);
	else
		this->brain = NULL;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		if (other.brain)
			this->brain = new Brain(*other.brain);
		else
			this->brain = NULL;
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void	Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}
