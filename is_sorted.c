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
}
