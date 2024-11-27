/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:12:44 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:57:03 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
/**
 * ft_strtrim - Elimina los caracteres especificados desde el inicio y el final de una cadena.
 * @s1: La cadena original a recortar.
 * @set: La cadena que contiene los caracteres a eliminar.
 *
 * Esta función toma una cadena `s1` y elimina todos los caracteres que aparecen en `set`
 * desde el inicio y el final de `s1`. La función devuelve una nueva cadena recortada
 * que no contiene los caracteres especificados en `set` al principio ni al final.
 * Si `s1` o `set` son NULL, la función devuelve NULL.
 *
 * Return: La cadena recortada o NULL si hay un error.
 */

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*result;
	size_t	i;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
