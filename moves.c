/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:11:39 by jgirard-          #+#    #+#             */
/*   Updated: 2022/09/01 04:48:57 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void create_node(node**  head, int n)
{
	node* new_node = malloc(sizeof(node));
	if (new_node == NULL) {
		exit(1);
	}
	new_node->next = NULL;
	new_node->x = n;
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
	node* curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

void stack_a(int n)
{
	int	data;
	struct node *curr, *head;
	
	head = malloc(sizeof(node));
	
	if (head == NULL)
	{
		exit (1);
	}
	
	head->x = data;
	head->next = NULL;
	
	curr = head;

	
}