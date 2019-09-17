/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:24:51 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/17 08:25:25 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		store_instruction(t_lst *a, t_lst *b, char *line_store)
{
	if (ft_strcmp("sa", line_store) == 0)
	{
		sa(a);
		return (1);
	}
	else if (ft_strcmp("sb", line_store) == 0)
	{
		sb(b);
		return (1);
	}
	else if (ft_strcmp("ss", line_store) == 0)
	{
		ab_swap(a, b);
		return (1);
	}
	else if (ft_strcmp("rra", line_store) == 0)
	{
		rra(&a);
		return (1);
	}
	else if (ft_strcmp("rrb", line_store) == 0)
	{
		rrb(&b);
		return (1);
	}
	else if (ft_strcmp("pa", line_store) == 0)
	{
		pa(&b, &a, b->data);
		return (1);
	}
	else if (ft_strcmp("pb", line_store) == 0)
	{
		pb(&a, &b, a->data);
		return (1);
	}
	else if (ft_strcmp("ra", line_store) == 0)
	{
		ra(&a);
		return (1);
	}
	else if (ft_strcmp("rb", line_store) == 0)
	{
		rb(&b);
		return (1);
	}
	else if (ft_strcmp("rr", line_store) == 0)
	{
		ra(&a);
		rb(&b);
		return (1);
	}
	else
	{
		ft_putendl("Error");
		exit(0);
	}
}
