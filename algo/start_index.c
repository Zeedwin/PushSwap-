/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleng <juleng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:15:53 by juleng            #+#    #+#             */
/*   Updated: 2022/09/30 16:18:29 by juleng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*find_min2(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->data < min->data))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	give_index(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = find_min2(stack);
	while (head)
	{
		head->index = index++;
		head = find_min2(stack);
	}
}