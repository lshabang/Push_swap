/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:18:16 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:48:01 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		lst_index(t_lst *stack)
{
	int		i;
	t_lst	*big;

	i = ls_countlist(stack);
	while (i)
	{
		if (big->pos == 0 && ls_isbignum(big, stack))
		{
			big->pos = i;
			i--;
		}
		big = big->next;
		if ((i != 0) && (big == NULL))
			big = stack;
	}
}
