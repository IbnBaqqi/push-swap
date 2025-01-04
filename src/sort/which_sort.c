/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 08:11:00 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/04 21:00:03 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	which_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = list_size(stack_a);
	if (size < 4)
		sort_three(stack_a, 'n');
		//sort_three(stack_a);
	else if (size > 3)
		big_guns(stack_a, stack_b); // TODO
}
