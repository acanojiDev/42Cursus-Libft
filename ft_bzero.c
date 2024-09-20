/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:52:41 by acano-ji          #+#    #+#             */
/*   Updated: 2024/09/20 13:45:00 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*strs;
	size_t			i;

	strs = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		strs[i] = 0;
		i++;
	}
}
