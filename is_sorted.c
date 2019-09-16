/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:19:57 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/16 14:39:01 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_lstlen(t_lst *a)
{
	int		i;
	t_lst	*tmp;

	tmp = a;
	i = 1;
	while (tmp->next != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
/*

int		is_sorted(t_lst *a)
{
	t_lst	*tmp;
	int		k;

	tmp = a;
	k = ft_lstlen(a);
	while (tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
		{
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}*/

int            is_sorted(t_lst *head)
{
    t_lst *node_ptr;
    int        i;
    node_ptr = head;
    if (!node_ptr)
        return (0);
    i = node_ptr->data;
    node_ptr = node_ptr->next;
    while (node_ptr)
    {
        if (i > node_ptr->data)
            return (0);
        i = node_ptr->data;
        node_ptr = node_ptr->next;
    }
    return (1);
}
