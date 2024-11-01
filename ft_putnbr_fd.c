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


void	ft_putnbr_fd(int n, int fd)
{
	if(n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if(n < 0)
	{
		ft_putchar_fd('-',fd);
		n = -n;
	}
	if(n >= 10)
	{
		ft_putnbr_fd(n / 10,fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
