/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:14:32 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/11 16:31:05 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalpha - Verifica si un carácter es una letra del alfabeto.
 * @c: El carácter a verificar.
 *
 * Esta función verifica si el carácter `c` es una letra del alfabeto,
 * ya sea en minúscula ('a' a 'z') o en mayúscula ('A' a 'Z').
 *
 * Return: 1 si el carácter es una letra del alfabeto, 0 en caso contrario.
 */

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
