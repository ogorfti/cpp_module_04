/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:03:41 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 15:09:01 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "AMateria.hpp"
//forward decalaration
#include <iostream>
class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};