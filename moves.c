/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:11:39 by jgirard-          #+#    #+#             */
/*   Updated: 2022/09/25 00:17:32 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int swap(l_list **stack)
{
	int		tmp_index;
	int		tmp_data;
	l_list *head;
	l_list *next;
	
	if(ft_lstsize(*stack) < 2)
		return(-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		error("An error on the [swap process] was produced");
	tmp_index = head->index;
	tmp_data = head->data;
	head->data = next->data;
	head->index =next->index;
	next->data = tmp_data;
	next->index = tmp_index;
	return(0);
}

int sa(l_list **stack_a)
{
	if (swap(stack_a) == -1)
		ft_putendl_fd("sa", 1);
	return(0);
}

int sb(l_list **stack_a)
{
	if (swap(stack_a) == -1)
		ft_putendl_fd("sb", 1);
	return(0);
}