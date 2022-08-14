/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:51:44 by jgirard-          #+#    #+#             */
/*   Updated: 2022/08/14 23:40:31 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

struct array_a {
	int value;
	struct array_a* next;
};

typedef struct array_a t_node;

void printarray_list(t_node *head)
{
	t_node	*tmp = head;

	while (tmp != NULL){
		printf("%d \n", tmp->value);
		tmp = tmp->next;
	}	
}

int main () {
	t_node n1, n2, n3, n4, n5;
	t_node *head;

	n1.value = 1;
	n2.value = 2;
	n3.value = 3;
	n4.value = 4;

	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = NULL;

	printarray_list(head);
	return (0);
}