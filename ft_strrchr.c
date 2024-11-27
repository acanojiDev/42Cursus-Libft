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

/**
 * ft_strrchr - Encuentra la última aparición de un carácter en una cadena.
 * @s: La cadena en la que se buscará el carácter.
 * @c: El carácter a buscar.
 *
 * Esta función busca la última aparición del carácter `c` en la cadena `s`.
 * Si se encuentra el carácter, la función devuelve un puntero a la última
 * aparición del carácter en la cadena. Si el carácter `c` es el carácter nulo
 * ('\0'), la función devuelve un puntero al final de la cadena `s`.
 * Si el carácter no se encuentra en la cadena, la función devuelve NULL.
 *
 * Return: Un puntero a la última aparición del carácter en la cadena, o NULL si no se encuentra.
 */

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
