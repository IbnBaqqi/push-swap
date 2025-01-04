/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_tail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:25:50 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 15:26:10 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node_tail(t_node **head, t_node *new_nod)
{
	t_node	*last_nod;

	if (*head)
	{
		last_nod = last_node(*head);
		new_nod->prev = last_nod;
		last_nod->next = new_nod;
	}
	else
		*head = new_nod;
}
