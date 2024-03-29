/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:33:57 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/13 14:28:03 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_lstadd(t_lst **alst, t_lst **new)
{
	t_lst	*head;

	head = *alst;
	if (alst != NULL || new != NULL)
	{
		(*new)->next = *alst;
		(*alst)->prev = *new;
		*alst = *new;
	}
}
