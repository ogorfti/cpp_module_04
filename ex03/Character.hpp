/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:06:35 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/17 15:37:12 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

typedef struct s_list
{
	AMateria *addr;
	struct s_list *next;
}				t_list;

class Character : public ICharacter
{
	private:
		std::string	name;
		t_list *head;
		AMateria *inv[4];
	public:
		Character();
		Character(std::string newname);
		Character(Character &other);
		Character& operator=(Character &other);
		~Character();

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

void	addBack(t_list **lst, t_list *newNode);
t_list	*copyList(t_list *head);
t_list	*newNode(AMateria *addr);
void	free_list(t_list *head);
