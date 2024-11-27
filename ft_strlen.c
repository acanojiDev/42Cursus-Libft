/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:00:03 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/20 13:44:04 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlen - Calcula la longitud de una cadena.
 * @s: La cadena cuya longitud se va a calcular.
 *
 * Esta función toma una cadena `s` y calcula el número de caracteres
 * en la cadena, excluyendo el carácter nulo terminador ('\0').
 *
 * Return: La longitud de la cadena `s`.
 */

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
