/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:46:07 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:35:15 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstnew - Crea un nuevo nodo de una lista enlazada.
 * @content: El contenido que se almacenará en el nuevo nodo.
 *
 * Esta función asigna memoria para un nuevo nodo de tipo `t_list` y
 * inicializa su contenido con el valor proporcionado en `content`.
 * El puntero `next` del nuevo nodo se establece en NULL.
 * Si la asignación de memoria falla, la función devuelve NULL.
 *
 * Return: Un puntero al nuevo nodo, o NULL si hay un error.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
