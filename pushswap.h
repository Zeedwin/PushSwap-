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
}l_list;
int ft_lstsize(l_list *stack);
int sa(l_list **list);
int sb(l_list **list);
int rr(l_list **list);
int rra(l_list **list);
int rrb(l_list **list);
int rrr(l_list **list);
int ra(l_list **list);
int rb(l_list **list);
int pa(l_list **list);
int pb(l_list **list);
void error(char *c);


#endif
