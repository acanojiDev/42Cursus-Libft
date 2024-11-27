/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:43:37 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 11:22:32 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strdup - Duplica una cadena.
 * @s1: La cadena a duplicar.
 *
 * Esta función toma una cadena `s1` y asigna memoria para una nueva cadena
 * que es una copia de `s1`. La nueva cadena es terminada en nulo ('\0').
 * Si la asignación de memoria falla, la función devuelve NULL.
 *
 * Return: Un puntero a la nueva cadena duplicada, o NULL si hay un error.
 */

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*tmp;
	size_t	len;

	i = 0;
	tmp = (char *)s1;
	len = ft_strlen(s1);
	tmp = malloc(len + 1);
	if (!tmp)
		return (NULL);
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
