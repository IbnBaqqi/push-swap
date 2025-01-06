/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:45:05 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 13:22:46 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	helper(t_node *highest, t_node **stack_a, t_node **stack_b, char ptr)
{
	int	num;

	num = highest->optimized;
	if (ptr == 'r')
		repeat_double_rotate(stack_a, stack_b, num, 1);
	else
		repeat_double_reverse(stack_a, stack_b, num, 1);
	highest->exit_cost += (num * -1);
	highest->target_cost += (num * -1);
}

void	highest_helper(t_node **highest, t_node *tmp, int *nbr)
{
	*highest = tmp;
	*nbr = tmp->priority;
}
