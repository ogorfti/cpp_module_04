/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:06:30 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/15 16:56:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*-------------------- Orthodox --------------------*/

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = nullptr;
	this->head = NULL;
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(std::string newname)
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = nullptr;
	this->name = newname;
	this->head = NULL;
	std::cout << "Character Parameterize constructor called" << std::endl;
}

Character& Character::operator=(Character &other)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	/*...*/
	(void)other;
	return (*this);
}

Character::Character(Character &other)
{
	*this = other;
	std::cout << "Character Copy constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

const std::string& Character::getName() const
{
	return (this->name);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list	*newNode(AMateria *addr)
{
	t_list	*node = new t_list;

	node->addr = addr;
	node->next = NULL;
	return (node);
}

void	addBack(t_list **lst, t_list *newNode)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = newNode;
	else
	{
		last = ft_lstlast(*lst);
		last->next = newNode;
	}		
}

void Character::equip(AMateria* m)
{
	// std::cout << "-------0\n";
	int i;

	i = 0;
	while (this->inv[i])
		i++;
	// std::cout << "i : " << i << "\n";
	if (i < 4)
		inv[i] = m;
	else
	{
		t_list *node = newNode(m);
		addBack(&this->head, node);
		// std::cout << "-------1.5\n";
	}
	// std::cout << "-------2\n";
}

void Character::unequip(int idx)
{
	//check idx 0 3
	t_list	*node = newNode(this->inv[idx]);
	addBack(&this->head, node);
	this->inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	(void) idx;
	(void) target;
	// AMateria::use(&target[idx]);
	if (idx >= 0 && idx <= 3)
		this->inv[idx]->use(target);
}