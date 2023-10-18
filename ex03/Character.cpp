/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:06:30 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/18 10:40:51 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*-------------------- Orthodox --------------------*/

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
	this->head = NULL;
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(std::string newname)
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
	this->name = newname;
	this->head = NULL;
	std::cout << "Character Parameterize constructor called" << std::endl;
}

Character& Character::operator=(Character &other)
{
	if (this != &other)
	{
		this->name = other.name;
		free_list(this->head);
		this->head = copyList(other.head);
		for (int i = 0; i < 4; i++)
		{
			if (other.inv[i])
			{
				delete this->inv[i];	
				this->inv[i] = other.inv[i]->clone();
			}
			else
			{
				delete this->inv[i];	
				this->inv[i] = NULL;
			}
		}
	}
	std::cout << "Character Copy assignment operator called" << std::endl;
	return (*this);
}

Character::Character(Character &other)
{
	this->name = other.name;
	this->head = copyList(other.head);
	for (int i = 0; i < 4; i++)
	{
		if (other.inv[i])
			this->inv[i] = other.inv[i]->clone();
		else
			this->inv[i] = NULL;
	}
	std::cout << "Character Copy constructor called" << std::endl;
}

void	free_list(t_list *head)
{
	t_list *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		delete tmp->addr;
		delete tmp;
	}
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete this->inv[i];
	free_list(this->head);
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

t_list *copyList(t_list *head)
{
	t_list *copy;

	copy = NULL;
	while (head)
	{
		t_list *node = newNode(head->addr);
		addBack(&copy, node);
		head = head->next;
	}
	return (copy);
}

void Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (this->inv[i])
		i++;
	if (i < 4)
		inv[i] = m;
	else
		delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		t_list	*node = newNode(this->inv[idx]);
		addBack(&this->head, node);
		this->inv[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
		this->inv[idx]->use(target);
}
