/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:15:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 09:12:58 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcat - Concatena dos cadenas asegurando la terminación nula.
 * @dst: El buffer de destino donde se concatenará la cadena.
 * @src: La cadena fuente que se va a concatenar.
 * @dstsize: El tamaño total del buffer de destino.
 *
 * Esta función concatena la cadena `src` al final de `dst`, asegurando que el
 * resultado esté terminado en nulo ('\0'). Se copiarán como máximo `dstsize - strlen(dst) - 1`
 * caracteres de `src` a `dst`. Si `dstsize` es menor o igual a la longitud de `dst`,
 * la función devuelve `dstsize + strlen(src)`. De lo contrario, devuelve la longitud
 * combinada de `dst` y `src`.
 *
 * Return: La longitud combinada de `dst` y `src`.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
