/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:36:05 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/08 12:46:47 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_int_len(long num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	if (num == 0)
		i++;
	while (num != 0)
	{
		i++;
		num = (num / 10);
	}
	return (i);
}

static void	fill_result(char *result, long num, int len)
{
	int	i;

	if (num == 0)
		result[0] = '0';
	else
	{
		if (num < 0)
		{
			result[0] = '-';
			num = -num;
		}
		i = len - 1;
		while (num != 0)
		{
			result[i] = ((num % 10) + 48);
			num = num / 10;
			i--;
		}
	}
	result[len] = '\0';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	num;

	num = n;
	len = calculate_int_len(num);
	result = malloc((len + 1) * (sizeof(char)));
	if (!result)
		return (NULL);
	fill_result(result, num, len);
	return (result);
}

/**
 * Función que calcula la longitud total del numero que le pasamos
 * Tenemos que tener en cuenta:
 primero hacer una variable contador para que cuente las
 veces queitera y saber el total de digitos
 * 1) Caundo sea negativo:

que la variable contador sume uno y ya tendremos contado
el signo negativo q nos pide la funcion
   2) Cuando sea 0 que la variable contador sume uno para
    saber que es positivo y apartir de ahi:
   3) Dividdir  entre 10 al numero para ir sumando el
    total de digitos y ir sumando
   contador y alfinal devolver contador
   a ascii que es lo mismo que a string.
 */
