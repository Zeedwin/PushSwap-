/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:21:57 by jgirard-          #+#    #+#             */
/*   Updated: 2022/09/24 23:45:51 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_lstsize(l_list *stack)
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

l_list  *ft_lstlast(l_list *lst)
{
        if (!lst)
                return (NULL);
        while (lst->next != NULL)
                lst = lst->next;
        return (lst);
}