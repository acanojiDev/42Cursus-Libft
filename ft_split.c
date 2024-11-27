/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:18:02 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:55:44 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_split - Divide una cadena en subcadenas utilizando un delimitador.
 * @s: La cadena a dividir.
 * @c: El carácter delimitador.
 *
 * Esta función toma una cadena `s` y la divide en subcadenas cada vez que
 * encuentra el carácter delimitador `c`. Las subcadenas resultantes se almacenan
 * en un array de cadenas, que termina con un puntero NULL. Si la asignación de
 * memoria falla, la función devuelve NULL.
 *
 * Return: Un array de cadenas resultante de dividir `s` por el delimitador `c`, o NULL si hay un error.
 */

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
int	main(void)
{
    char	**result;
    int		i;

    // Llamada a ft_split para dividir la cadena "Hola mundo esto es una prueba" usando el espacio como delimitador
    result = ft_split("Hola mundo esto es una prueba", ' ');
    if (!result)
    {
        // Si ft_split devuelve NULL, se imprime un mensaje de error y se termina el programa
        printf("Error al dividir la cadena.\n");
        return (1);
    }

    // Imprimir las subcadenas resultantes
    i = 0;
    while (result[i])
    {
        printf("Subcadena %d: %s\n", i, result[i]);
        i++;
    }

    // Liberar la memoria asignada por ft_split
    i = 0;
    while (result[i])
    {
        // Liberar cada subcadena individualmente
        free(result[i]);
        i++;
    }
    // Liberar el array de cadenas
    free(result);

    return (0);
}
