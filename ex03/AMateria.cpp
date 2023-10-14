/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:47:28 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/14 13:57:05 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

const std::string& AMateria::getType() const
{
	return (this->type);
}

// virtual void AMateria::use(ICharacter& target)
// {
	
// }