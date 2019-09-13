/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:32:25 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/13 16:20:29 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "header.h"

int     main(int argc, char **argv)
{
    t_data m;
	int    i;
    
	i = 0;
	t_lst *tmp;
	char *line_store;
    
    if (is_valid(argc, argv) == 0)
    {
        ft_putendl("Error");
        return (0);
    }
    else
    {
        m.a = kmohamma(argc, argv);
    }
	tmp = m.a;
	while (get_next_line(1, &line_store))
	{
		store_instruction(m.a, m.b, line_store);
		if (store_instruction(m.a, m.b, line_store) == 1)
		{
			ft_putendl("Error");
			return (0);
		}
		if (tmp->next)
		{
			tmp = tmp->next;
		}
        i++;
	}
	if (is_sorted(m.a) == 1)
	{
		ft_putendl("OK");
	}
	else if (is_sorted(m.a) == 0 || m.a == NULL)
	{
		ft_putendl("KO");
	}
    print(m.a, m.b);
    return (0);
}


