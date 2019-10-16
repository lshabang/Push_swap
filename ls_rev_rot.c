/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:57:50 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 17:24:11 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_rev_rot(t_lst *stack)
{
	t_lst	*tmp1;
	int		last_num;
	int		last_pos;

	if (stack == NULL)
		return ;
	tmp1 = stack;
	while (tmp1->next != NULL)
		tmp1 = tmp1->next;
	last_num = tmp1->content;
	last_pos = tmp1->pos;
	while (tmp1->prev != NULL)
	{
		tmp1->content = tmp1->prev->content;
		tmp1->pos = tmp1->prev->pos;
		tmp1 = tmp1->prev;
	}
	stack->content = last_num;
	stack->pos = last_pos;
}
