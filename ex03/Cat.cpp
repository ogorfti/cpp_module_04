/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:42:26 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/13 11:19:58 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-------------------- Orthodox --------------------*/

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat &other)
{
	this->type = other.type;
	if (other.brain)
		this->brain = new Brain(*other.brain);
	else
		this->brain = nullptr;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		if (other.brain)
			this->brain = new Brain(*other.brain);
		else
			this->brain = nullptr;
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void	Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}