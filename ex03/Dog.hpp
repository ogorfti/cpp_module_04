/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:49:36 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/13 13:56:15 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog &other);
		Dog& operator=(Dog &other);
		~Dog();
		void makeSound() const;
};