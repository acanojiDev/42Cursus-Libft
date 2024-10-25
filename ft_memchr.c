/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:56:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 09:40:46 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*strs;

	i = 0;
	strs = (unsigned char *)s;
	while (i < n)
	{
		if (strs[i] == (unsigned char) c)
			return (&strs[i]);
		i++;
	}
	return (NULL);
}
