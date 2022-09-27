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

int	ft_push(l_list **stack_1, l_list **stack_2)
{
	l_list	*tmp;
	l_list	*head_1;
	l_list	*head_2;
	
	if (ft_lstsize(stack_1) == 0)
		return(-1);
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

int pa(l_list **stack_a, l_list **stack_b)
{
	if (ft_push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int pb(l_list **stack_a, l_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

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
	if((ft_lstsize(stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return(-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return(0);
}

int rotate(l_list **stack)
{
	l_list	*head;
	l_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int ra(l_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int rb(l_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int rr(l_list **stack_a, l_list **stack_b)
{
	if ((ft_lstsize(stack_a) || rotate(ft_lstsize)) < 2)
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}

int reverse_rotate(l_list **stack)
{
	l_list	*head;
	l_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int rra(l_list **stack_a)
{
	if(reverse_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int rrb(l_list **stack_b)
{
	if(reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int rrr(l_list **stack_a, l_list **stack_b)
{
	if (ft_lstsize(*stack_a) || ft_lstsize(*stack_b) < 2)
		return (-1);
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}