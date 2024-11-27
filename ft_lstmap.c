/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:23:24 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 19:24:13 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstmap - Crea una nueva lista aplicando una función a cada elemento de una lista.
 * @lst: Un puntero al primer elemento de la lista original.
 * @f: La función a aplicar a cada elemento de la lista.
 * @del: La función para eliminar el contenido de un nodo si es necesario.
 *
 * Esta función recorre la lista `lst` y aplica la función `f` a cada elemento,
 * creando una nueva lista con los resultados de las aplicaciones de `f`.
 * Si la asignación de memoria para un nuevo nodo falla, la función `del` se utiliza
 * para limpiar la nueva lista y liberar la memoria.
 *
 * Return: Un puntero al primer elemento de la nueva lista, o NULL si hay un error.
 */

t_list	ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
