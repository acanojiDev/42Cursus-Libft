/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:12:38 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/20 15:30:43 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcmp - Compara dos bloques de memoria.
 * @s1: El primer bloque de memoria a comparar.
 * @s2: El segundo bloque de memoria a comparar.
 * @n: El número de bytes a comparar.
 *
 * Esta función compara los primeros `n` bytes de los bloques de memoria `s1` y `s2`.
 * La comparación se realiza byte a byte utilizando los valores de los bytes interpretados
 * como unsigned char. La función devuelve un valor negativo, cero o positivo si el primer
 * bloque de memoria es menor, igual o mayor que el segundo bloque de memoria, respectivamente.
 *
 * Return: Un valor negativo si `s1` es menor que `s2`, 0 si son iguales, o un valor positivo si `s1` es mayor que `s2`.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}
