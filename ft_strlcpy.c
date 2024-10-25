/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:15:47 by acano-ji          #+#    #+#             */
/*   Updated: 2024/10/25 09:50:10 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
/*
1. **Calcular la longitud de `src`**:
   - Se recorre `src` para calcular su longitud (`src_len`).

2. **Caso especial `size == 0`**:
   - Si `size` es 0,
	no se copia nada a `dest` y se devuelve la longitud de `src`.

3. **Copiar caracteres**:
   - Se copian hasta `size - 1` caracteres de `src` a `dest`.
   - Se asegura que `dest` esté terminado en nulo (`\0`).

4. **Devolver la longitud de `src`**:
   - La función devuelve la longitud de `src`,
	independientemente de cuántos caracteres se hayan copiado.*/
