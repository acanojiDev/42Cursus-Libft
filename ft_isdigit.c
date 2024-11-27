/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:48:46 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/11 16:31:22 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isdigit - Verifica si un carácter es un dígito decimal.
 * @c: El carácter a verificar.
 *
 * Esta función verifica si el carácter `c` es un dígito decimal.
 * Los dígitos decimales son aquellos con valores ASCII en el rango de '0' a '9' inclusive.
 *
 * Return: 1 si el carácter es un dígito decimal, 0 en caso contrario.
 */

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
