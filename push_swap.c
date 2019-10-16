/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:15:28 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:58:19 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_back(t_lst *stack_a, t_lst *stack_b)
{
	while (stack_b != NULL)
	{
		ls_push(&stack_a, &stack_b);
		ft_putendl("pa");
	}
}

static void	command_s(t_lst *stack_a)
{
	if ((ls_short_way(stack_a)))
	{
		ls_rev_rot(stack_a);
		ft_putendl("rra");
	}
	else if ((ls_short_way(stack_a)) == 0)
	{
		ls_rotate(stack_a);
		ft_putendl("ra");
	}
}

static void	command(t_lst *stack_a, t_lst *stack_b)
{
	t_lst	*tmp;
	int		size;

	size = ls_countlist(stack_a);
	while (ls_countlist(stack_a) > 3)
	{
		tmp = stack_a;
		if ((ft_strequ(ls_verify(stack_a), "OK")))
			break ;
		if ((ls_issmallnum(tmp, stack_a)))
		{
			ls_push(&stack_b, &stack_a);
			ft_putendl("pb");
		}
		else
			command_s(stack_a);
	}
	if (ls_countlist(stack_a) <= 3 && (ft_strequ(ls_verify(stack_a), "KO")))
		ls_sort_three(&stack_a);
	if (stack_b != NULL)
		push_back(stack_a, stack_b);
}

int			main(int argc, char *argv[])
{
	t_lst	*stack_b;
	t_lst	*stack_a;

	stack_b = NULL;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	else if (argc > 2)
		ls_isnum(argc, argv);
	stack_a = ls_stack(argc, argv);
	command(stack_a, stack_b);
	return (0);
}
