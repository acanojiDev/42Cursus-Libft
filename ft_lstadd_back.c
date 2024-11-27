/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:16:37 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 16:19:58 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_back - Añade un nuevo nodo al final de una lista enlazada.
 * @lst: Un puntero al puntero del primer nodo de la lista.
 * @new: El nuevo nodo a añadir al final de la lista.
 *
 * Esta función añade el nodo `new` al final de la lista enlazada `lst`.
 * Si `new` es NULL, la función no hace nada.
 *
 * Return: Nada.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
