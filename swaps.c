/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:45:27 by jgirard-          #+#    #+#             */
/*   Updated: 2022/09/27 22:29:34 by jgirard-         ###   ########.fr       */
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
		error("An error in the [swap process] occured");
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
		return(-1);
	ft_putendl_fd("sa", 1);
	return(0);
}

int sb(l_list **stack_a)
{
	if (swap(stack_a) == -1)
		return(-1);
	ft_putendl_fd("sb", 1);
	return(0);
}

int ss(l_list **stack_a, l_list **stack_b)
{
	if((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return(-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return(0);
}