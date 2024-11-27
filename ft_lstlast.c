/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:36:27 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:51:49 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstlast - Devuelve el último nodo de una lista enlazada.
 * @lst: Un puntero al primer nodo de la lista.
 *
 * Esta función recorre una lista enlazada y devuelve un puntero al último nodo.
 * Si la lista está vacía (es decir, `lst` es NULL), la función devuelve NULL.
 *
 * Return: Un puntero al último nodo de la lista, o NULL si la lista está vacía.
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
