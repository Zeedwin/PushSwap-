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
}			node;

int sa(node **list);
int sb(node **list);
int rr(node **list);
int rra(node **list);
int rrb(node **list);
int rrr(node **list);
int ra(node **list);
int rb(node **list);
int pa(node **list);
int pb(node **list);



#endif
