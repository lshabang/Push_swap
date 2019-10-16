/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:52:41 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 17:25:57 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_rotate(t_lst *stack)
{
	int		first;
	t_lst	*tmp;
	int		first_pos;

	if (stack == NULL)
		return ;
	first = stack->content;
	first_pos = stack->pos;
	tmp = stack;
	while (tmp->next != NULL)
	{
		tmp->content = tmp->next->content;
		tmp->pos = tmp->next->pos;
		tmp = tmp->next;
	}
	tmp->content = first;
	tmp->pos = first_pos;
}
