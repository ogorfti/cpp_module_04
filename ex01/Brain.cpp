/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:32:31 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/13 11:38:22 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain& Brain::operator=(Brain& other)
{
	if (this != &other)
		std::copy(other.ideas, other.ideas + 100, this->ideas);
	std::cout << "Brain Copy assignment operator called" << std::endl;
	return (*this);
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}