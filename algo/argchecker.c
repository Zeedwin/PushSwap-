/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argchecker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleng <juleng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:09:44 by jgirard-          #+#    #+#             */
/*   Updated: 2022/10/01 15:21:15 by juleng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	conver_check(int tmp, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == tmp)
			return (1);
		i++;
	}
	return (0);
}

int	check_sort(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}


static int	num_ver(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	arg_checker(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**args;	
	
	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!num_ver(args[i]))
			error("Error");
		if (conver_check(tmp, args, i))
			error("Error");
		if (tmp < -2147483648 || tmp > 2147483647)
			error("Error");
		i++;
	}
	if (argc == 2)
		free_str(args);
}
