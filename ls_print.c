/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 21:04:01 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:42:03 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_print(t_lst *stack)
{
	int		i;

	i = 1;
	while (stack != NULL)
	{
		ft_putnbr(i);
		ft_putstr("---> ");
		ft_putnbr(stack->content);
		ft_putendl(" <---");
		stack = stack->next;
		i++;
	}
	return ;
}
