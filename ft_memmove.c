/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:14:21 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/18 17:13:10 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memmove - Copia un bloque de memoria a otro, manejando correctamente la superposición.
 * @dest: El destino donde se copiará el bloque de memoria.
 * @src: La fuente desde donde se copiará el bloque de memoria.
 * @n: El número de bytes a copiar.
 *
 * Esta función copia `n` bytes desde el bloque de memoria `src` al bloque de memoria `dest`.
 * A diferencia de `ft_memcpy`, `ft_memmove` maneja correctamente la superposición de bloques
 * de memoria, asegurando que los datos no se corrompan si `src` y `dest` se solapan.
 *
 * Return: Un puntero al bloque de memoria `dest`.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
