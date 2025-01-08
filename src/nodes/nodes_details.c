/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_details.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 21:10:24 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/08 07:55:55 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_no_de	*max_details(t_node **head)
{
	long			max;
	int				index;
	t_node			*temp;
	t_no_de			*t_node_details;

	temp = *head;
	index = 0;
	max = INT_MIN;
	t_node_details = malloc(sizeof(t_no_de));
	while (temp)
	{
		if (max < temp->value)
		{
			t_node_details->node = temp;
			t_node_details->value = temp->value;
			t_node_details->index = index;
			max = temp->value;
		}
		index++;
		temp = temp->next;
	}
	return (t_node_details);
}

t_no_de	*min_details(t_node **head)
{
	long			min;
	int				index;
	t_node			*temp;
	t_no_de			*t_node_details;

	temp = *head;
	index = 0;
	min = INT_MAX;
	t_node_details = malloc(sizeof(t_no_de));
	while (temp)
	{
		if (min > temp->value)
		{
			t_node_details->node = temp;
			t_node_details->value = temp->value;
			t_node_details->index = index;
			min = temp->value;
		}
		index++;
		temp = temp->next;
	}
	return (t_node_details);
}

t_no_de	*mid_details(t_node **head)
{
	t_node			*temp;
	t_no_de			*t_node_details;
	int				size;

	size = 0;
	temp = *head;
	t_node_details = malloc(sizeof(t_no_de));
	t_node_details->index = list_size(head) / 2;
	while (temp)
	{
		if (size == t_node_details->index)
		{
			t_node_details->node = temp;
			t_node_details->value = temp->value;
		}
		size++;
		temp = temp->next;
	}
	return (t_node_details);
}

t_detai	*special_node(t_node **stack_a)
{
	t_detai	*all_nodes;

	all_nodes = malloc(sizeof(t_detai));
	all_nodes->min = min_details(stack_a);
	all_nodes->mid = mid_details(stack_a);
	all_nodes->max = max_details(stack_a);
	return (all_nodes);
}
