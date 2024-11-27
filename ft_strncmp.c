/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:26:19 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 09:25:40 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strncmp - Compara dos cadenas hasta un número dado de caracteres.
 * @s1: La primera cadena a comparar.
 * @s2: La segunda cadena a comparar.
 * @n: El número máximo de caracteres a comparar.
 *
 * Esta función compara las cadenas `s1` y `s2` hasta un máximo de `n` caracteres.
 * La comparación se realiza carácter por carácter utilizando los valores ASCII
 * de los caracteres. La función devuelve un valor negativo, cero o positivo si
 * `s1` es menor, igual o mayor que `s2`, respectivamente.
 * Si `n` es 0, la función devuelve 0.
 *
 * Return: Un valor negativo si `s1` es menor que `s2`, 0 si son iguales, o un valor positivo si `s1` es mayor que `s2`.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0')
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
