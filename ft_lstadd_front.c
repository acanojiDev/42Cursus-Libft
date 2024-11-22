/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-ji <acano-ji@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:57:35 by acano-ji          #+#    #+#             */
/*   Updated: 2024/11/22 15:32:59 by acano-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!new)
		return; // Si no existe 'new', no hacemos nada, porque no tiene sentido agregar un nodo vacío

	new->next = *lst; // El nuevo nodo ('new') debe apuntar al primer nodo de la lista actual
	*lst = new; //// Ahora, hacemos que 'lst' apunte al nuevo nodo, convirtiéndolo en el primer nodo de la lista
}
/*Hacemos la comprobacion de si no hay new para eviar que intentemos
agregar un nodo vacio a la lista*/

/*En new->next = lst le decimos que el campo next de new ahora apunte
al nodo que anteriormente era el primero de la lista*/

/*Y con *lst = new le decimos que actualizamos el puntero lst
para que apunte a new es deccir , el nuevo nodo new se convierte
en el primer nodo de la lista, como resultado lst ahora apunta al nuevo nodo y el antiguo primer
nodo ahora queda detras, siendo el segundo nodo de la lista*/
