/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:15:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/01 18:34:00 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putstr_fd - Escribe una cadena de caracteres en un descriptor de archivo.
 * @s: La cadena de caracteres a escribir.
 * @fd: El descriptor de archivo en el que se escribirá la cadena.
 *
 * Esta función toma una cadena de caracteres `s` y la escribe carácter por carácter
 * en el descriptor de archivo especificado por `fd`. Utiliza la función `write` para
 * realizar la escritura.
 *
 * Return: Nada.
 */

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
