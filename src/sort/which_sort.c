/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 08:11:00 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 12:56:47 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	which_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = list_size(stack_a);
	if (size < 4)
		sort_three(stack_a, 'n');
	else if (size > 3)
		big_guns(stack_a, stack_b);
}
