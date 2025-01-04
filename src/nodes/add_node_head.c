/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_head.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:27:07 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 15:27:24 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node_head(t_node **head, t_node *new_nod)
{
	new_nod->next = *head;
	if (*head != NULL)
		(*head)->prev = new_nod;
	*head = new_nod;
}
