/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:24:16 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 16:33:41 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstdelone - Elimina y libera un nodo de una lista enlazada.
 * @lst: El nodo a eliminar.
 * @del: La función para eliminar el contenido del nodo.
 *
 * Esta función elimina y libera un nodo de una lista enlazada. La función `del`
 * se utiliza para liberar el contenido del nodo, y luego se libera la memoria
 * del propio nodo. El puntero al siguiente nodo no se ve afectado.
 *
 * Return: Nada.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
