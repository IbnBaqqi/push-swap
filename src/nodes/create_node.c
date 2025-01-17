/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:26:25 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 16:29:22 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value, int index)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->list_index = index;
	new->target_cost = 0;
	new->priority = 0;
	new->optimized = 0;
	new->exit_cost = 0;
	new->order_index = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
