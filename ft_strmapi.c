/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:14:39 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/10 17:24:18 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strmapi - Aplica una función a cada carácter de una cadena para crear una nueva cadena.
 * @s: La cadena original.
 * @f: La función a aplicar a cada carácter de la cadena.
 *
 * Esta función toma una cadena `s` y aplica la función `f` a cada carácter de la cadena,
 * pasando el índice del carácter y el propio carácter como argumentos a la función `f`.
 * La función devuelve una nueva cadena resultante de aplicar `f` a cada carácter de `s`.
 * Si la asignación de memoria para la nueva cadena falla, la función devuelve NULL.
 *
 * Return: La nueva cadena creada al aplicar `f` a cada carácter de `s`, o NULL si hay un error.
 */

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
