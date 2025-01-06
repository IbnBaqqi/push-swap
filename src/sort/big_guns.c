/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_guns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:04:46 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 11:35:26 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	pick_next_move(t_node **stack, int target_index, int mid_index)
{
	int	size;

	size = list_size(stack);
	if (target_index <= mid_index)
		repeat_rotate(stack, target_index, "ra", 1);
	else if (target_index > mid_index)
		repeat_reverse(stack, size - target_index, "rra", 1);
}

void	double_opportunity(t_node *highest, t_node **stack_a, t_node **stack_b)
{
	if (highest->optimized != 0)
	{
		if (highest->optimized > 0)
			helper(highest, stack_a, stack_b, 'r');
		else if (highest->optimized < 0)
			helper(highest, stack_a, stack_b, '\0');
	}
}

void	big_guns(t_node **stack_a, t_node **stack_b)
{
	t_node		*highest;
	t_stacks	*stacks;

	index_array(stack_a);
	stacks = malloc(sizeof(t_stacks));
	stacks->stack_a = stack_a;
	stacks->stack_b = stack_b;
	repeat_push(stacks, list_size(stack_a) - 3, "pb", 1);
	if (!check_sort(stack_a) && !is_cyclic(stack_a))
		sort_three(stack_a, 'y');
	while (*stack_b)
	{
		reconfigure(stack_a, stack_b);
		
	}
}
