/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:28:41 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 13:03:15 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_substr - Extrae una subcadena de una cadena dada.
 * @s: La cadena de la cual se extraerá la subcadena.
 * @start: La posición inicial en la cadena original desde donde comenzar la extracción.
 * @len: La longitud máxima de la subcadena a extraer.
 *
 * Esta función toma una cadena `s` y crea una nueva cadena que es una subcadena
 * de `s`, comenzando desde el índice `start` y con una longitud máxima de `len`.
 * Si `start` es mayor o igual a la longitud de `s`, la función devuelve una cadena vacía.
 * Si `len` es mayor que la cantidad de caracteres restantes en `s` desde `start`,
 * la longitud de la subcadena se ajusta para no exceder los límites de `s`.
 * La función devuelve la subcadena extraída o NULL si ocurre un error de asignación de memoria.
 *
 * Return: La subcadena extraída o NULL si hay un error.
 */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
