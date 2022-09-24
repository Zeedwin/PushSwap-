/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:51:44 by jgirard-          #+#    #+#             */
/*   Updated: 2022/09/16 02:00:20 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void printarray_list(node *head)
{
	node*	tmp = head;

	while (tmp != NULL){
		printf("%d \n", tmp->index);
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
	new_node->index = n;
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
	new_node-> = n;
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
	new_node->index = n;
	new_node->next = Node->next;
	Node->next = new_node; 	
}

void create_sorted(node** head, int n)
{
	if (*head == NULL || (*head)->index >= n){
		createtop_node(head, n);
		return ;
	}
	node* curr = *head;
	while (curr->next != NULL) {
		if (curr->next->index >= n) {
			create_node(&curr, n);
			return ;	
		}	
		if (curr->next->index <= n) {
		createmid_node(curr, n);
		}
		curr = curr->next;
	}
	create_node(&curr, n);
}

void remove_elem(node** head, int n) {
	if (*head == NULL) {
		return;
	}
	if ((*head)->index == n) {
		node* rem = *head;
		*head  = (*head)->next;
		free(rem);  
		return;
	}
	 for (node* curr = *head; curr->next != NULL; curr = curr->next){
		 if (curr->next->index == n) {
			 node* rem = curr->next;
			 curr->next = curr->next->next;
			 free(rem);
		 }
	 }
}

int main (int argc, char* argv[]) {
	node* head = NULL;

	(void) argc;
	(void) argv;

	create_node(&head, 24);
	create_node(&head, 34);
	create_node(&head, 64);
	create_sorted(&head, 4);
	create_sorted(&head, 2);
	create_sorted(&head, 1);
	
	remove_elem(&head, 1);
	remove_elem(&head, 4); 
	
	for (node* curr = head; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->index);
	}
	freelist(&head);
	//system("leaks a.out");
	return (0);
}