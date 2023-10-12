/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:55:07 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/12 13:55:21 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*-------------------- Orthodox --------------------*/

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::WrongCat(WrongCat &other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void	WrongCat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
