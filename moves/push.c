/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:11:39 by jgirard-          #+#    #+#             */
/*   Updated: 2022/10/01 18:36:37 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_push(t_list **stack_1, t_list **stack_2)
{
	t_list	*tmp;
	t_list	*head_1;
	t_list	*head_2;

	if (ft_lstsize(*stack_1) == 0)
		return (-1);
	head_1 = *stack_1;
	head_2 = *stack_2;
	tmp = head_1;
	head_1 = head_1->next;
	*stack_1 = head_1;
	if (!head_2)
	{
		head_2 = tmp;
		head_2->next = NULL;
		*stack_2 = head_2;
	}
	else
	{
		tmp->next = head_2;
		*stack_2 = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
