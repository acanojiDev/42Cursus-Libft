/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:27:32 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/20 13:44:09 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*strs;
	size_t			i;

	strs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		strs[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
