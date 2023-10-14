/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:41:09 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/13 13:54:54 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Aanimal
{
	protected:
		std::string type;
	public:
		Aanimal();
		Aanimal(Aanimal &other);
		Aanimal& operator=(Aanimal &other);
		virtual ~Aanimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
};
