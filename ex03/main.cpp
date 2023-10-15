/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:07:59 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 17:03:42 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Dog.hpp"
// #include "Cat.hpp"
// #include "WrongCat.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = new Cure;
	me->equip(tmp);
	std::cout << me->getName() << "\n";
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	return 0;
}
