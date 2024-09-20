/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:37:19 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/20 16:05:33 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*stack;
	unsigned char	*needle;
	size_t			i;
	int				j;

	j = 0;
	i = 0;
	stack = (unsigned char *) big;
	needle = (unsigned char *) little;
	ft_strlen(stack);
	ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)big);
	while (i < len && stack[i] != '\0')
	{
		/*Arreglar esto*/
	}
}
