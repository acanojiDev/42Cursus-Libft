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

/**
 * ft_memset - Rellena un bloque de memoria con un valor específico.
 * @s: El bloque de memoria a rellenar.
 * @c: El valor con el que se rellenará el bloque de memoria.
 * @n: El número de bytes a rellenar.
 *
 * Esta función toma un bloque de memoria apuntado por `s` y lo rellena con el valor `c`
 * (convertido a unsigned char) en los primeros `n` bytes del bloque de memoria.
 *
 * Return: Un puntero al bloque de memoria `s`.
 */

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
