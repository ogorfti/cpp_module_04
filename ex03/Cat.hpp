/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:42:55 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/13 13:55:53 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Aanimal.hpp"
#include "Brain.hpp"

class Cat : public Aanimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat &other);
		Cat& operator=(Cat &other);
		~Cat();
		void makeSound() const;
};