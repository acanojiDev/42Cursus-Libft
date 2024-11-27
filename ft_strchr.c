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

/**
 * ft_strchr - Encuentra la primera aparición de un carácter en una cadena.
 * @s: La cadena en la que se buscará el carácter.
 * @c: El carácter a buscar.
 *
 * Esta función busca la primera aparición del carácter `c` en la cadena `s`.
 * Si se encuentra el carácter, la función devuelve un puntero a la primera
 * aparición del carácter en la cadena. Si el carácter `c` es el carácter nulo
 * ('\0'), la función devuelve un puntero al final de la cadena `s`.
 * Si el carácter no se encuentra en la cadena, la función devuelve NULL.
 *
 * Return: Un puntero a la primera aparición del carácter en la cadena, o NULL si no se encuentra.
 */

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
