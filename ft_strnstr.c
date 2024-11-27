/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:37:19 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 09:47:26 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strnstr - Encuentra una subcadena dentro de una cadena hasta un tamaño dado.
 * @big: La cadena en la que se buscará la subcadena.
 * @little: La subcadena a buscar.
 * @len: El número máximo de caracteres a buscar.
 *
 * Esta función busca la primera aparición de la subcadena `little` en la cadena `big`,
 * pero no más allá de los primeros `len` caracteres de `big`. Los caracteres nulos
 * terminadores no se comparan. Si `little` es una cadena vacía, la función devuelve `big`.
 * Si `little` no se encuentra en los primeros `len` caracteres de `big`, la función devuelve NULL.
 *
 * Return: Un puntero a la primera aparición de `little` en `big`, o NULL si no se encuentra.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && (i + j) < len && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
