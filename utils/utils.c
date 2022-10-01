/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleng <juleng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:21:57 by jgirard-          #+#    #+#             */
/*   Updated: 2022/09/30 18:43:37 by juleng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *stack)
{
	int	c;

	if (stack == NULL)
		return (0);
	c = 1;
	while (stack->next)
	{
		stack = stack->next;
		c++;
	}
	return (c);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s++, 1);
	}
	write(fd, "\n", 1);
}

void error(char *c)
{
	ft_putendl_fd(c, 1);
	exit(1);
}

t_list  *ft_lstlast(t_list *lst)
{
        if (!lst)
                return (NULL);
        while (lst->next != NULL)
                lst = lst->next;
        return (lst);
}

t_list	*ft_lstnew(int data)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = -1;
	new->next = NULL;
	return (new);
}