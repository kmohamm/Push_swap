/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:24:51 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/16 15:50:57 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int    store_instruction(t_lst *a, t_lst *b, char *line_store)
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
		exit (0);
	}
}

// int    store_instruction(t_lst *a, t_lst *b, char *instr)
// {
//     if (!ft_strcmp(instr, "sa"))
//         {
//          //   ft_putendl(ft_itoa(ft_strcmp(instr, "sa")));
//             sa(a);
//         }
//     else if (!ft_strequ(instr, "sb"))
//         sb(b);
//     else if (!ft_strequ(instr, "ss"))
//         ab_swap(a, b);
//     else if (!ft_strequ(instr, "pa"))
//         ft_push(&a, ft_pop(&b));;
//     else if (!ft_strequ(instr, "pb"))
//         ft_push(&a, ft_pop(&b));;
//     else if (!ft_strequ(instr, "ra"))
//         ra(&a);
//     else if (!ft_strequ(instr, "rb"))
//         rb(&b);
//     else if (!ft_strequ(instr, "rr"))
// 	{
// 		ra(&a);
// 		rb(&b);
// 	}
//     else if (!ft_strequ(instr, "rra"))
//         rra(&a);
//     else if (!ft_strequ(instr, "rrb"))
//         rrb(&b);
//     else if (!ft_strequ(instr, "rrr"))
// 	{
//         rra(&a);
// 		rrb(&b);
// 	}
//     else
//         return (-1);
//     return (0);
// }


