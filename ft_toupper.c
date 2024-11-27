/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:00:03 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/20 13:43:42 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_toupper - Convierte una letra minúscula a mayúscula.
 * @c: El carácter a convertir.
 *
 * Esta función toma un entero que representa un carácter y verifica si es
 * una letra minúscula (rango ASCII 97 a 122). Si lo es, la función lo convierte
 * a la letra mayúscula correspondiente restando 32 de su valor ASCII.
 * Si el carácter no es una letra minúscula, se devuelve sin cambios.
 *
 * Return: El carácter convertido si era minúscula, de lo contrario el carácter original.
 */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
