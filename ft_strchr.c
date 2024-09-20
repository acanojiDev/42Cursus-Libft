/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:15:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/20 14:54:23 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*strs;
	int		i;

	i = 0;
	strs = (char *)s;
	while (strs[i] != '\0')
	{
		if (strs[i] == (char)c)
		{
			return (&strs[i]);
		}
		i++;
	}
	if (strs[i] == (char)c)
		return (&strs[i]);
	return (NULL);
}
