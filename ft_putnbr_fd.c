/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:15:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/01 18:34:00 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putnbr_fd - Escribe un número entero en un descriptor de archivo.
 * @n: El número entero a escribir.
 * @fd: El descriptor de archivo en el que se escribirá el número.
 *
 * Esta función toma un número entero `n` y lo escribe en el descriptor de archivo
 * especificado por `fd`. Utiliza recursión para manejar cada dígito del número.
 * Si el número es negativo, escribe un signo menos y luego el valor absoluto del número.
 * Si el número es el valor mínimo de un entero (`INT_MIN`), escribe "-2147483648".
 *
 * Return: Nada.
 */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
