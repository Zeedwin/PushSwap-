/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:409:03 by jgirard-          #+#    #+#             */
/*   Updated: 2022/09/12 16:14:54 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct list
{
	int index;
	int data;
	struct list *next;
}l_list;*

int 	swap(l_list **stack)
int 	ft_lstsize(l_list *stack);
int 	sa(l_list **l_list);
int 	sb(l_list **l_list);
int 	rr(l_list **l_list);
int 	rra(l_list **l_list);
int		rrb(l_list **l_list);
int 	rrr(l_list **stack_a, l_list **stack_b)
int 	ra(l_list **l_list);
int 	rb(l_list **list);
int 	pa(l_list **stack_a, l_list **stack_b)
int 	pb(l_list **stack_a, l_list **stack_b)
void 	error(char *c);
void	ft_putendl_fd(char *s, int fd);
l_list  *ft_lstlast(l_list *lst);

#endif
