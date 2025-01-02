/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_directions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:26:01 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/02 09:02:11 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	check_front(t_node *min_node, t_node **stack_a)
{
	t_node	*temp;

	temp = min_node;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			break ;
		temp = temp->next;
	}
	if (last_node(*stack_a)->value == temp->value)
		return (1);
	return (0);
}

int	check_back(t_node *min_node, t_node **stack_a)
{
	t_node	*temp;

	temp = min_node;
	while (temp->prev)
	{
		if (temp->value > temp->prev->value)
			break ;
		temp = temp->prev;
	}
	if (last_node(*stack_a)->value == temp->value)
		return (1);
	return (0);
}

int	check_cyclic(t_node **stack_a)
{
	t_node_details	*min;

	min = min_details(stack_a);
	if (min->node->next && min->node->prev)
	{
		if (((*stack_a)->value < last_node(*stack_a)->value)
			|| (*stack_a)->value == min->value)
			return (free(min), 0);
	}
	if (min->node->prev && !check_front(min->node, stack_a))
		return (free(min), 0);
	if (min->node->prev && !check_back(min->node, stack_a))
		return (free(min), 0);
	free(min);
	return (1);
}