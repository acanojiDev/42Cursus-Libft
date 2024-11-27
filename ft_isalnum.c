/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:28:30 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/11 16:30:47 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalnum - Verifica si un carácter es alfanumérico.
 * @c: El carácter a verificar.
 *
 * Esta función verifica si el carácter `c` es alfanumérico,
 * es decir, si es una letra del alfabeto (mayúscula o minúscula)
 * o un dígito decimal ('0' a '9').
 *
 * Return: 1 si el carácter es alfanumérico, 0 en caso contrario.
 */

int	ft_isalnum(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'));
}
