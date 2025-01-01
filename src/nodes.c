/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:40:11 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/01 09:53:34 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*create_node(int value, int index)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->list_index = index;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	add_node_head(t_node **head, t_node *new_nod)
{
	new_nod->next = *head;
	if (*head != NULL)
		(*head)->prev = new_nod;
	*head = new_nod;
}

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

t_node	*delete_node(t_node **prev_node, t_node *target_node)
{
	if (!*prev_node || !target_node)
		return (NULL);
	if (*prev_node == target_node)
		*prev_node = target_node->next;
	if (target_node->next != NULL)
		target_node->next->prev = target_node->prev;
	if (target_node->prev != NULL)
		target_node->prev->next = target_node->prev;
	target_node->prev = NULL;
	target_node->next = NULL;
	return (target_node);
}

t_node	*last_node(t_node *head)
{
	t_node	*last;

	last = head;
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}