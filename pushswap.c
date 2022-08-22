/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:51:44 by jgirard-          #+#    #+#             */
/*   Updated: 2022/08/22 21:11:15 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

struct stack_a {
	int x;
	struct stack_a* next;
};
typedef struct stack_a node;

void printarray_list(node *head)
{
	node*	tmp = head;

	while (tmp != NULL){
		printf("%d \n", tmp->x);
		tmp = tmp->next;
	}	
}

void freelist(node** head)
{
	node* curr  = *head;
	while (curr != NULL)
	{
		node* tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
}

void createtop_node(node** head, int n)
{
	node*	new_node = malloc(sizeof(node));
	if (new_node == NULL)
	{
		exit (3);
	}
	new_node->x = n;
	new_node->next = *head;
	*head = new_node;
}
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

void createmid_node(node* Node, int n)
{
	node* new_node = malloc(sizeof(node));
	if (new_node == NULL) {
		exit (4);
	}
	new_node->x = n;
	new_node->next = Node->next;
	Node->next = new_node; 	
}

void insert_sorted(node** head, int n)
{
	if (*head == NULL || (*head)->x){
		createtop_node(head, n);
		return ;
	}
	node* curr = *head;
}

int main (int argc, char* argv[]) {
	node* head = NULL;

	(void) argc;
	(void) argv;
	create_node(&head, 14);
	create_node(&head, 2);
	create_node(&head, 7);
	createmid_node(head->next->next, 8);
	for (node* curr = head; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->x);
	}
	freelist(&head);
	//system("leaks a.out");
	return (0);
}