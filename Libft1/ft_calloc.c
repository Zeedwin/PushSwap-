/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 07:53:37 by jgirard-          #+#    #+#             */
/*   Updated: 2022/05/18 19:55:10 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (str == 0)
		return (NULL);
	if (size && (((size_t)-1) / size) < count)
		return (NULL);
	str = malloc((sizeof(char)) * (count * size));
	ft_memset(str, 0, count * size);
	return (str);
}
