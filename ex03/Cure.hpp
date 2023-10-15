/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:47:43 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 12:39:05 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &other);
		Cure& operator=(const Cure &other);
		~Cure();

		std::string const & getType() const;
		Cure* clone() const;
		void use(ICharacter& target);
};
