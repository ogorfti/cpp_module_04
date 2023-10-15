/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:47:43 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 12:32:21 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		Ice& operator=(const Ice &other);
		~Ice();

		std::string const & getType() const;
		Ice* clone() const;
        void use(ICharacter& target);
};
