/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:15:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:55:34 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putchar_fd - Escribe un carácter en un descriptor de archivo.
 * @c: El carácter a escribir.
 * @fd: El descriptor de archivo en el que se escribirá el carácter.
 *
 * Esta función toma un carácter `c` y lo escribe en el descriptor de archivo
 * especificado por `fd`. Utiliza la función `write` para realizar la escritura.
 *
 * Return: Nada.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
