/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juleng <juleng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 07:53:37 by jgirard-          #+#    #+#             */
/*   Updated: 2022/10/03 16:06:21 by juleng           ###   ########.fr       */
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
