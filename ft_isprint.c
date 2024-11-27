/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:42:32 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/11 16:31:31 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isprint - Verifica si un carácter es imprimible.
 * @c: El carácter a verificar.
 *
 * Esta función verifica si el carácter `c` es un carácter imprimible,
 * incluyendo el espacio. Los caracteres imprimibles son aquellos con
 * valores ASCII en el rango de 32 a 126 inclusive.
 *
 * Return: 1 si el carácter es imprimible, 0 en caso contrario.
 */

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
