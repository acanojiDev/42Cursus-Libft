/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:03:41 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 17:05:52 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		/*Aplicamos la funcion f al contenido del elemento actual*/
		f(tmp->content);
		/*Ponemos el tmp hacia el siguiente elemento*/
		tmp = tmp->next;
	}
}
