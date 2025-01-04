/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_details.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 21:10:24 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/03 23:06:43 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_node_details	*max_details(t_node **head)
{
	long			max;
	int				index;
	t_node			*temp;
	t_node_details	*nod_details;

	temp = *head;
	index = 0;
	max = INT_MIN;
	nod_details = malloc(sizeof(t_node_details));
	while (temp)
	{
		if (max < temp->value)
		{
			nod_details->node = temp;
			nod_details->value = temp->value;
			nod_details->index = index;
			max = temp->value;
		}
		index++;
		temp = temp->next;
	}
	return (nod_details);
}

t_node_details	*min_details(t_node **head)
{
	long			min;
	int				index;
	t_node			*temp;
	t_node_details	*nod_details;

	temp = *head;
	index = 0;
	min = INT_MAX;
	nod_details = malloc(sizeof(t_node_details));
	while (temp)
	{
		if (min > temp->value)
		{
			nod_details->node = temp;
			nod_details->value = temp->value;
			nod_details->index = index;
			min = temp->value;
		}
		index++;
		temp = temp->next;
	}
	return (nod_details);
}
t_node_details	*mid_details(t_node **head)
{
	t_node			*temp;
	t_node_details	*nod_details;
	int				size;

	size = 0;
	temp = *head;
	nod_details = malloc(sizeof(t_node_details));
	nod_details->index = list_size(head) / 2;
	while (temp)
	{
		if (size == nod_details->index)
		{
			nod_details->node = temp;
			nod_details->value = temp->value;
		}
		size++;
		temp = temp->next;
	}
	return (nod_details);
}
t_details	*special_node(t_node **stack_a)
{
	t_details	*all_nodes;

	all_nodes = malloc(sizeof(t_details));
	all_nodes->min = min_details(stack_a);
	all_nodes->mid = mid_details(stack_a);
	all_nodes->max = max_details(stack_a);
	return (all_nodes);
}