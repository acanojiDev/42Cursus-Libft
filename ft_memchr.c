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

/**
 * ft_memchr - Busca la primera aparición de un carácter en un bloque de memoria.
 * @s: El bloque de memoria en el que se buscará.
 * @c: El carácter a buscar.
 * @n: El número de bytes a examinar.
 *
 * Esta función busca la primera aparición del carácter `c` (interpretado como unsigned char)
 * en los primeros `n` bytes del bloque de memoria apuntado por `s`.
 * Si se encuentra el carácter, la función devuelve un puntero al byte correspondiente en el bloque de memoria.
 * Si el carácter no se encuentra en los primeros `n` bytes, la función devuelve NULL.
 *
 * Return: Un puntero al primer byte que contiene el carácter `c`, o NULL si no se encuentra.
 */

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
