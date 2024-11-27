/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:57:35 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:35:07 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_front - Añade un nuevo nodo al principio de una lista enlazada.
 * @lst: Un puntero al puntero del primer nodo de la lista.
 * @new: El nuevo nodo a añadir al principio de la lista.
 *
 * Esta función añade el nodo `new` al principio de la lista enlazada `lst`.
 * Si `new` es NULL, la función no hace nada.
 *
 * Return: Nada.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
