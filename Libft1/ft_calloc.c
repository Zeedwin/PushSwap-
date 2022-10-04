/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:55:33 by jgirard-          #+#    #+#             */
/*   Updated: 2022/10/04 18:55:41 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = NULL;
	if (str == 0)
		return (NULL);
	if (size && (((size_t)-1) / size) < count)
		return (NULL);
	str = malloc((sizeof(char)) * (count * size));
	ft_memset(str, 0, count * size);
	return (str);
}
