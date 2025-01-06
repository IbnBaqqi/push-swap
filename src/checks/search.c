/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:01:25 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 13:16:38 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_max_handler(t_node *exiting_node, char *found,
	int size, t_details *details)
{
	if ((exiting_node->value < details->min->node->value)
		|| (exiting_node->value > details->max->node->value))
	{
		if (details->min->index > details->mid->index)
			exiting_node->target_cost
				= details->min->node->list_index - size;
		else
			exiting_node->target_cost = details->min->node->list_index;
		*found = 'y';
	}
}

void	waterfall(t_node *exiting_node,
	char *found, t_details *details, int size)
{
	t_node	*tmp;
	int		mid_index;

	tmp = details->min->node;
	mid_index = details->mid->index;
	*found = 'n';
	while (tmp->next)
	{
		if (tmp->value < exiting_node->value
			&& exiting_node->value < tmp->next->value)
		{
			*found = 'y';
			if (tmp->next->list_index <= mid_index)
				exiting_node->target_cost = tmp->next->list_index;
			else
				exiting_node->target_cost = tmp->list_index - size + 1;
			break ;
		}
		tmp = tmp->next;
	}
}

void	fountain(t_node *exiting_nod, char *found, t_details *details, int size)
{
	t_node	*tmp;
	int		mid_pos;

	*found = 'n';
	tmp = details->min->node;
	mid_pos = details->mid->index;
	while (tmp->prev)
	{
		if (tmp->prev->value < exiting_nod->value
			&& exiting_nod->value < tmp->value)
		{
			*found = 'y';
			if (tmp->list_index <= mid_pos)
				exiting_nod->target_cost = tmp->list_index;
			else
				exiting_nod->target_cost = tmp->list_index - size;
			break ;
		}
		tmp = tmp->prev;
	}
}

void	head_to_tail(t_node **stack_a, t_node *exiting_node,
	char *found, t_node *last_node)
{
	if (last_node->value < exiting_node->value
		&& exiting_node->value < (*stack_a)->value)
	{
		exiting_node->target_cost = 0;
		*found = 'y';
	}
}
