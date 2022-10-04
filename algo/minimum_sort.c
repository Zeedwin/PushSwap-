/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimum_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:12:00 by jgirard-          #+#    #+#             */
/*   Updated: 2022/10/01 22:35:51 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min(t_list **stack, int n)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != n)
			min = head->index;
	}
	return (min);
}

void	tri_sort(t_list **stack)
{
	t_list	*head;

	head = *stack;
	head->min_1 = find_min(stack, -1);
	head->min_2 = find_min(stack, head->min_1);
	if (head->index == head->min_1 && head->next->index != head->min_2)
	{
		ra(stack);
		sa(stack);
		rra(stack);
	}
	else if (head->index == head->min_2)
		if (head->next->index == head->min_1)
			sa(stack);
	else
		rra(stack);
	else
		if (head->next->index == head->min_1)
			ra(stack);
	else
	{
		sa(stack);
		rra(stack);
	}
}

void	quad_sort(t_list **stack_a, t_list **stack_b)
{
	int		range;

	if (check_sort(stack_a))
		return ;
	range = get_range(stack_a, find_min(stack_a, -1));
	if (range == 1)
		ra(stack_a);
	else if (range == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (range == 3)
		rra(stack_a);
	if (check_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	tri_sort(stack_a);
	pa(stack_a, stack_b);
}

void	penta_sort(t_list **stack_a, t_list **stack_b)
{
	int	range;

	range = get_range(stack_a, find_min(stack_a, -1));
	if (check_sort(stack_a))
		return ;
	if (range == 1)
		ra(stack_a);
	else if (range == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (range == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (range == 4)
		rra(stack_a);
	if (check_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	quad_sort(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	mini_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (check_sort(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		tri_sort(stack_a);
	else if (size == 4)
		quad_sort(stack_a, stack_b);
	else if (size == 5)
		penta_sort(stack_a, stack_b);
}
