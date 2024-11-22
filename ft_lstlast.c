/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:36:27 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:49:12 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst) //Si la lista esta vacía devolvemos NULL
		return ;
	while (lst->next) //Mientras haya un siguiente nodo
		lst = lst->next; //Avanzamos al siguiente nodo
	return (lst); //Cuando llegemos al ultimo nodo, lo devolvemos
}
