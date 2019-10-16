/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:47:41 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 17:21:41 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_swap(t_lst *stack)
{
	int		tmp1;
	int		tmp2;
	int		pos1;
	int		pos2;

	if (stack == NULL)
		return ;
	tmp1 = stack->content;
	pos1 = stack->pos;
	tmp2 = stack->next->content;
	pos2 = stack->next->content;
	stack->content = tmp2;
	stack->pos = pos2;
	stack->next->content = tmp1;
	stack->pos = pos1;
}
