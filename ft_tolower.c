/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:00:03 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 09:15:32 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_tolower - Convierte una letra mayúscula a minúscula.
 * @c: El carácter a convertir.
 *
 * Esta función toma un entero que representa un carácter y verifica si es
 * una letra mayúscula (rango ASCII 65 a 90). Si lo es, la función lo convierte
 * a la letra minúscula correspondiente sumando 32 a su valor ASCII.
 * Si el carácter no es una letra mayúscula, se devuelve sin cambios.
 *
 * Return: El carácter convertido si era mayúscula, de lo contrario el carácter original.
 */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
