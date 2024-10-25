/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:37:58 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 10:00:51 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ocurrence;

	last_ocurrence = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
		{
			last_ocurrence = (char *)s;
		}
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (last_ocurrence);
}
