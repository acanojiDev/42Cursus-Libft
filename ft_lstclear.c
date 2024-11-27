/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:28:07 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 16:55:25 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstclear - Elimina y libera todos los nodos de una lista enlazada.
 * @lst: Un puntero al puntero del primer nodo de la lista.
 * @del: La función para eliminar el contenido de cada nodo.
 *
 * Esta función elimina y libera todos los nodos de una lista enlazada.
 * La función `del` se utiliza para liberar el contenido de cada nodo,
 * y luego se libera la memoria de los propios nodos. Al final, el puntero
 * al primer nodo de la lista se establece en NULL.
 *
 * Return: Nada.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}
