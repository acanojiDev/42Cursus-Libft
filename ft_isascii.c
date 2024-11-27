/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:33:40 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/11 16:31:13 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isascii - Verifica si un carácter es un carácter ASCII.
 * @c: El carácter a verificar.
 *
 * Esta función verifica si el carácter `c` es un carácter ASCII.
 * Los caracteres ASCII son aquellos con valores en el rango de 0 a 127 inclusive.
 *
 * Return: 1 si el carácter es un carácter ASCII, 0 en caso contrario.
 */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
