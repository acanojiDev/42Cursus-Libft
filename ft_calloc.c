/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:32:32 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:54:59 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_calloc - Asigna memoria para un array de elementos y la inicializa a cero.
 * @count: El número de elementos a asignar.
 * @size: El tamaño de cada elemento.
 *
 * Esta función asigna memoria para un array de `count` elementos, cada uno de
 * `size` bytes de longitud, y la inicializa a cero. Utiliza `malloc` para la
 * asignación de memoria y `ft_bzero` para la inicialización.
 *
 * Return: Un puntero a la memoria asignada, o NULL si la asignación falla.
 */

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}
