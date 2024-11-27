/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:15:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/08 12:31:51 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putendl_fd - Escribe una cadena de caracteres seguida de un salto de línea en un descriptor de archivo.
 * @s: La cadena de caracteres a escribir.
 * @fd: El descriptor de archivo en el que se escribirá la cadena.
 *
 * Esta función toma una cadena de caracteres `s` y la escribe carácter por carácter
 * en el descriptor de archivo especificado por `fd`, seguida de un salto de línea.
 * Utiliza la función `write` para realizar la escritura.
 *
 * Return: Nada.
 */

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
