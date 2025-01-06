/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_guns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:04:46 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 12:42:48 by sabdulba         ###   ########.fr       */
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

void	exit_moves(t_node *highest, t_node **stack_b)
{
	if (highest->exit_cost > 0)
		repeat_rotate(stack_b, highest->exit_cost, "rb", 1);
	else if (highest->exit_cost < 0)
		repeat_reverse(stack_b, highest->exit_cost * -1, "rrb", 1);
	highest->exit_cost = 0;
}

void	target_moves(t_node *highest, t_node **stack_a)
{
	if (highest->target_cost > 0)
		repeat_rotate(stack_a, highest->target_cost, "ra", 1);
	else if (highest->target_cost < 0)
		repeat_reverse(stack_a, highest->target_cost * -1, "rra", 1);
	highest->target_cost = 0;
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
		highest = highest_priority(stack_b, stack_a);
		double_opportunity(highest, stack_a, stack_b);
		exit_moves(highest, stack_b);
		target_moves(highest, stack_a);
		push(stack_b, stack_a, "pa", 1);
		if (!check_sort(stack_a) && !is_cyclic(stack_a))
			break ;
	}
	resort_special(stack_a);
	free_stacks(stacks->stack_a, stacks->stack_b);
	free(stacks);
}
