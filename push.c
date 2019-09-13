/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:22:33 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/13 14:13:44 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include "./libft/libft.h"

void	add_top(t_lst **node, int data)
{
	t_lst	*new;

	new = (t_lst *)malloc(sizeof(t_lst));
	new->data = data;
	new->next = NULL;
	if (*node == NULL)
		*node = new;
	else
	{
		new->next = *node;
		*node = new;
	}
}

void	pa(t_lst **a, t_lst **b, int data)
{
	t_lst *new_node;

	new_node = (t_lst*)malloc(sizeof(t_lst));
	new_node->data = data;
	new_node->next = (*a);
	(*a) = new_node;
	if ((*b)->next)
		delete_node(*b);
	else
		*b = NULL;
}

void	pb(t_lst **b, t_lst **a, int data)
{
	t_lst *new_node;

	new_node = (t_lst*)malloc(sizeof(t_lst));
	new_node->data = data;
	new_node->next = (*b);
	(*b) = new_node;
	if ((*a)->next)
		delete_node(*a);
	else
		*a = NULL;
}

void	ra(t_lst **a)
{
	t_lst *temp;
	t_lst *temp1;

	temp = *a;
	temp1 = *a;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = temp1;
	temp = temp1->next;
	temp1->next = NULL;
	*a = temp;
}

void	rb(t_lst **b)
{
	t_lst *temp;
	t_lst *temp1;

	temp = *b;
	temp1 = *b;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = temp1;
	temp = temp1->next;
	temp1->next = NULL;
	*b = temp;
}
