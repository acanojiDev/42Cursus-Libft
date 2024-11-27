/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:04:33 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/10 18:10:42 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_striteri - Aplica una función a cada carácter de una cadena.
 * @s: La cadena a iterar.
 * @f: La función a aplicar a cada carácter de la cadena.
 *
 * Esta función toma una cadena `s` y aplica la función `f` a cada carácter de la cadena,
 * pasando el índice del carácter y un puntero al carácter como argumentos a la función `f`.
 * La función `f` puede modificar los caracteres de la cadena `s`.
 *
 * Return: Nada.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
