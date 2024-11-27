/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:10:33 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:34:44 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstsize - Cuenta el número de elementos en una lista enlazada.
 * @lst: Un puntero al primer elemento de la lista.
 *
 * Esta función recorre una lista enlazada y cuenta el número de elementos
 * que contiene. La lista está compuesta por nodos de tipo `t_list`.
 *
 * Return: El número de elementos en la lista.
 */

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
