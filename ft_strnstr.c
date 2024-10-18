/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:37:19 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/18 17:48:07 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*n;

	n = (const char *)needle;
	if (!*needle)
		return (haystack);
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			while (*n && len > 0 && *haystack == *n)
			{
				haystack++;
				n++;
				len--;
			}
			if (*n == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
