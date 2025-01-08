/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:49:48 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/08 07:56:46 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	recalibrate(t_node **head)
{
	t_node	*temp;
	int		i;

	if (!head)
		return ;
	i = 0;
	temp = *head;
	while (temp)
	{
		temp -> list_index = i;
		temp = temp -> next;
		i++;
	}
}

void	resort_special(t_node **stack_a)
{
	t_detai	*details;

	details = special_node(stack_a);
	pick_next_move(stack_a, details->min->index, details->mid->index);
	free(details->min);
	free(details->max);
	free(details->mid);
	free(details);
}

void	reconfigure(t_node **stack_a, t_node **stack_b)
{
	int				size_stacka;
	int				size_stackb;
	t_detai			*details;
	int				mid_index;
	t_no_de			*mid;

	recalibrate(stack_b);
	recalibrate(stack_a);
	size_stacka = list_size(stack_a);
	size_stackb = list_size(stack_b);
	mid = mid_details(stack_b);
	mid_index = mid->index;
	details = special_node(stack_a);
	exit_cost(stack_b, size_stackb, mid_index);
	target_cost(stack_a, stack_b, details, size_stacka);
	optimize(stack_b);
	priority(stack_b);
	free(details->min);
	free(details->mid);
	free(details->max);
	free(details);
	free(mid);
}
