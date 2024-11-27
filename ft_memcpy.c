/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:14:21 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/23 16:28:59 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcpy - Copia un bloque de memoria a otro.
 * @dest: El destino donde se copiará el bloque de memoria.
 * @src: La fuente desde donde se copiará el bloque de memoria.
 * @n: El número de bytes a copiar.
 *
 * Esta función copia `n` bytes desde el bloque de memoria `src` al bloque de memoria `dest`.
 * Si `dest` y `src` apuntan al mismo bloque de memoria, o si `n` es 0, la función no hace nada.
 *
 * Return: Un puntero al bloque de memoria `dest`.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src || n == 0)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
