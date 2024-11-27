/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:38:59 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 09:10:08 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_atoi - Convierte una cadena de caracteres a un número entero.
 * @nptr: La cadena de caracteres a convertir.
 *
 * Esta función toma una cadena de caracteres `nptr` y la convierte en un número entero.
 * La conversión ignora los espacios en blanco iniciales y maneja un signo opcional ('+' o '-').
 * La función procesa los caracteres numéricos hasta que encuentra un carácter no numérico.
 *
 * Return: El número entero resultante de la conversión.
 */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
