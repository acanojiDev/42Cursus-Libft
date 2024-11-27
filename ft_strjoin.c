/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:19:33 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 16:09:45 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strjoin - Une dos cadenas en una nueva cadena.
 * @s1: La primera cadena.
 * @s2: La segunda cadena.
 *
 * Esta función toma dos cadenas `s1` y `s2` y las une en una nueva cadena.
 * La nueva cadena es el resultado de concatenar `s1` y `s2`.
 * Si la asignación de memoria para la nueva cadena falla, la función devuelve NULL.
 *
 * Return: La nueva cadena resultante de la concatenación de `s1` y `s2`, o NULL si hay un error.
 */

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	totalsize;
	char	*newchain;

	totalsize = ft_strlen(s1) + ft_strlen(s2);
	newchain = malloc(totalsize + 1);
	if (!newchain)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		newchain[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		newchain[i] = s2[j];
		i++;
		j++;
	}
	newchain[i] = '\0';
	return (newchain);
}
