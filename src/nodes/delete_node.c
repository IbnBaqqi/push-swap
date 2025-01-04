/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:25:06 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 18:19:07 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*delete_node(t_node **prev_node, t_node *target_node)
{
	if (!*prev_node || !target_node)
		return (NULL);
	if (*prev_node == target_node)
		*prev_node = target_node->next;
	if (target_node->next != NULL)
		target_node->next->prev = target_node->prev;
	if (target_node->prev != NULL)
		target_node->prev->next = target_node->next;
	target_node->prev = NULL;
	target_node->next = NULL;
	return (target_node);
}
